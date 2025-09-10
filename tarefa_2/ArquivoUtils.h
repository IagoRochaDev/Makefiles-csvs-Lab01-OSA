#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include "Pessoa.h"

using namespace std;

vector<Pessoa> ler_arquivo(const string &nome_arquivo)
{
    vector<Pessoa> pessoas;
    ifstream arquivo(nome_arquivo);
    if (!arquivo.is_open())
    {
        cerr << "Erro ao abrir o arquivo: " << nome_arquivo << endl;
        return pessoas;
    }

    string linha;
    getline(arquivo, linha);
    while (getline(arquivo, linha))
    {
        if (linha.empty())
            continue;
        stringstream ss(linha);
        string nome, idade_str;
        if (getline(ss, nome, ',') && getline(ss, idade_str))
        {
            int idade = stoi(idade_str);
            Pessoa p;
            p.setNome(nome);
            p.setIdade(idade);
            pessoas.push_back(p);
        }
    }

    arquivo.close();
    return pessoas;
}

bool gerar_arquivo(const string &nome_arquivo, const vector<Pessoa> &dados)
{
    ofstream arquivo_gerado(nome_arquivo);
    if (!arquivo_gerado.is_open())
    {
        return false;
    }
    arquivo_gerado << "name,age" << endl;
    for (const Pessoa &dado : dados)
    {
        arquivo_gerado << dado.getNome() << "," << dado.getIdade() << endl;
    }
    arquivo_gerado.close();
    return true;
}

void exibir_dados(const vector<Pessoa> &dados)
{
    cout << setfill('=') << setw(50) << "=" << endl;
    cout << setfill(' ') << setw(30) << "LISTA DE PESSOAS" << endl;
    cout << setfill('=') << setw(50) << "=" << endl;

    cout << left << setw(3) << "="
         << setw(25) << " Nome "
         << setw(10) << " Idade  " 
         << setw(3)<< "=" << endl;

    cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;

    for (unsigned i = 0; i < dados.size(); i++)
    {
        cout << left << setw(5) << (i + 1)
             << setw(25) << dados[i].getNome()
             << setw(10) << dados[i].getIdade() << endl;
    }

    cout << setfill('=') << setw(50) << "=" << endl;
}

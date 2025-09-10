#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>


using namespace std;

vector<string> ler_arquivo( const string &nome_arquivo){
    vector<string> dados;

    ifstream LeitorArquivo(nome_arquivo);    
    if (!LeitorArquivo.is_open()){ return dados;}
    string texto;
    while(getline(LeitorArquivo, texto))
        dados.push_back(texto);
    LeitorArquivo.close();
    return dados;
}

bool gerar_arquivo( const string &nome_arquivo, const vector<string> &dados){
    ofstream arquivo_gerado(nome_arquivo);
    if(!arquivo_gerado.is_open()){ return false;}
    for(const string dado : dados){
        arquivo_gerado<< dado << endl;
    }
    arquivo_gerado.close();
    return true;
}

void exibir_dados(const vector<string> &dados) {
    cout << setfill('=') << setw(40) << "=" << endl;
    cout << setfill(' ') << setw(20) << "LISTA DE NOMES" << endl;
    cout << setfill('=') << setw(40) << "=" << endl;

    for (unsigned i = 0; i < dados.size(); i++) {
        cout << setfill(' ') 
                  << setw(3) << (i + 1) << " | "
                  << setw(30) << dados[i] << endl;
    }

    cout << setfill('=') << setw(40) << "=" << endl;
}



#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
    void setNome(const string &n)
    {
        nome = n;
    }

    string getNome() const
    {
        return nome;
    }

    void setIdade(int i)
    {
        idade = i;
    }

    int getIdade() const
    {
        return idade;
    }
};
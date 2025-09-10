#include <stdio.h>
#include <vector>
#include <string>
#include "Pessoa.h"

#include "ArquivoUtils.h"

using namespace std;

int main(){
    string nome_arquivo_entrada = "Nomes_Idades.csv";
    string nome_arquivo_saida = "dados_saida.csv";
    vector<Pessoa> pessoas = ler_arquivo(nome_arquivo_entrada);
    exibir_dados(pessoas);
    cout<< "Arquivo gerado: "<< gerar_arquivo(nome_arquivo_saida, pessoas)<< endl;
    return 0;
}

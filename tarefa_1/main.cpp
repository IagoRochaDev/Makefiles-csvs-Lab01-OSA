#include <stdio.h>
#include <vector>
#include <string>

#include "ArquivoUtils.h"

using namespace std;

int main(){
    string nome_arquivo_entrada = "nomes.txt";
    string nome_arquivo_saida = "nomes_saida.txt";
    vector<string> nomes = ler_arquivo(nome_arquivo_entrada);
    exibir_dados(nomes);
    cout<< "Arquivo gerado: "<< gerar_arquivo(nome_arquivo_saida, nomes)<< endl;
    return 0;
}

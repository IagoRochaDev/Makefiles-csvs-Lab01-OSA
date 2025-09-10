# Lab01 - Makefiles e Manipulação de Arquivos

Este repositório contém a atividade **Lab01** da disciplina **Organização de Arquivos** do curso de Bacharelado em Ciência da Computação (IFNMG).

## 📌 Objetivo
Revisar conceitos fundamentais de:
- Automação da compilação em C++ utilizando **Makefiles**;
- Leitura e escrita de dados em **arquivos de texto** e **CSV**;
- Modularização do código em múltiplos arquivos (`.cpp` e `.h`);
- Uso de estruturas de dados adequadas para representar informações.

---

## 📂 Estrutura

- **tarefa_1/** → Leitura de um arquivo de texto contendo nomes.  
  - Lê `nomes.txt`  
  - Exibe os nomes formatados no console  
  - Gera um novo arquivo de saída com os nomes  

- **tarefa_2/** → Leitura de um arquivo CSV com registros estruturados (nome e idade).  
  - Define a classe `Pessoa`  
  - Lê `dados.csv` (nome,idade)  
  - Exibe os dados formatados no console  
  - Gera um novo arquivo de saída no mesmo formato  

---

## ⚙️ Compilação e Execução

Cada tarefa possui seu próprio **Makefile**, com os seguintes alvos:

- `make all` → Compila o projeto  
- `make run` → Executa o programa  
- `make clean` → Remove arquivos temporários  

### Exemplo de uso:

```bash
cd tarefa_1
make run

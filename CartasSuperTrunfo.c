#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Estou declarando as variaveis como mencionados na aulas 
    int código_da_cidade_1 = 1, código_da_cidade_2 = 2; //essas variaveis não serão informadas pelo usuario serão fixas
    int população_1 = 10000, população_2 = 20000, pontos_turísticos_1 = 3, pontos_turísticos_2 = 2;//cadastro das vareaveis de população e ponto turisticos 
    float área_1 = 12365.12, área_2 = 1234.15, PIB_1 = 5000 , PIB_2 = 5000;// cadastro dos pontos flutuantes area e PIB
    char  nome_1 = "Cidade 1", nome_2 = "Cidade 2"; //nomes das cidades
    char estado_1 = "A", estado_2 = "B";

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Jogador Abaixo digite os dados da Primeira carta:\n");
    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", &nome_1);
    printf("Digite o nome População da primeira carta:\n");
    scanf("%d", &população_1);
    printf("Digite a área em Km² da primeira carta:\n");
    scanf("%f", &área_1);
    printf("Digite o Valor do PIB Abreviado em Bilhoes de Reais da primeira carta:\n");
    scanf("%f", &PIB_1);
    printf("Digite o a quantidade de pontos  turisticos da primeira carta:\n");
    scanf("%d", &pontos_turísticos_1);
    printf("\n")

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Estou declarando as variaveis como mencionados na aulas 
    int codigo_da_cidade_1 = 1, codigo_da_cidade_2 = 2; //essas variaveis não serão informadas pelo usuario serão fixas
    int populacao_1 = 1000, populacao_2 = 1000, pontos_turisticos_1 = 2, pontos_turisticos_2 = 2;//cadastro das vareaveis de população e ponto turisticos 
    float area_1, area_2 = 000.00, PIB_1, PIB_2 = 00.00;// cadastro dos pontos flutuantes area e PIB
    char  nome_1[25] = "Cidade 1", nome_2[25] = "Cidade 2"; //nomes das cidades
    char estado_1 = 'A', estado_2 = 'B';

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //abaixo dados da primaira carta
    printf("Jogador 1 digite os dados da Primeira carta.\n");
    printf("Jogador 1 Digite o nome da cidade da primeira carta - Apenas Letras:\n");
    scanf("%s", &nome_1);
    printf("Jogador 1 Digite a População da primeira carta - numero inteiro:\n");
    scanf("%d", &populacao_1);
    printf("Jogador 1 Digite a área em Km² da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &area_1);
    printf("Jogador 1 Digite o Valor do PIB Abreviado em Bilhoes de Reais da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_1);
    printf("Jogador 1 Digite a quantidade de pontos  turisticos da primeira carta - numero inteiro:\n");
    scanf("%d", &pontos_turisticos_1);
    printf("\n");
    float  Densidade_Populacional_1 = (float) populacao_1 / area_1; //calculo desnsidade populacional
    float PIB_per_Capita_1 = (float) PIB_1 / populacao_1; // calculo PIB per capita
     //abaixo dados da segunda carta
    printf("Jogador 2 digite os dados da Segunda carta.\n");
    printf("Jogador 2 Digite o nome da cidade da Segunda carta - Apenas Letras:\n");
    scanf("%s", &nome_2);
    printf("Jogador 2 Digite a População da Segunda carta- numero inteiro:\n");
    scanf("%d", &populacao_2);
    printf("Jogador 2 Digite a área em Km² da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &area_2);
    printf("Jogador 2 Digite o Valor do PIB Abreviado em Bilhoes de Reais da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_2);
    printf("Jogador 2 Digite a quantidade de pontos  turisticos da Segunda carta- numero inteiro:\n");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");
    float  Densidade_Populacional2 = (float) populacao_2 / area_2; //calculo media desnsidade populacional
    float PIB_per_Capita_2 = (float) PIB_2 / populacao_2; // calculo PIB per capita

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //abaixo valores da primeira caixa jogador 1
    printf("abaixo sera exibida os dados da Primeira carta Jogador 1:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Código: %c0%d\n", estado_1,codigo_da_cidade_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %d Pessoas\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1); // Formatação para 2 casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", PIB_1); // Formatação para 2 casas decimais.
    printf("Número Pontos Turísticos: %d\n", pontos_turisticos_1);

    printf("\n"); // Adicionei uma linha em branco para melhor leitura.

    //abaixo valores da primeira caixa jogador 1
    printf("abaixo sera exibida os dados da Segunda carta Jogador 2:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Código: %c0%d\n", estado_1,codigo_da_cidade_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %d Pessoas\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2); // Formatação para 2 casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", PIB_2); // Formatação para 2 casas decimais.
    printf("Número Pontos Turísticos: %d\n", pontos_turisticos_2);

    printf("\n"); // Adicionei uma linha em branco para melhor leitura.

    return 0;
}

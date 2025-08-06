#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codigo_da_cidade_1 = 1, codigo_da_cidade_2 = 2;
    int populacao_1, populacao_2, pontos_turisticos_1, pontos_turisticos_2;
    float area_1, area_2, PIB_1, PIB_2;
    char nome_1[25], nome_2[25];
    char estado_1 = 'A', estado_2 = 'B';
    
    float SuperPoder_A;
    float SuperPoder_B;

    // Cadastro das Cartas:
    printf("Jogador 1 digite os dados da Primeira carta.\n");
    printf("Jogador 1 Digite o nome da cidade da primeira carta - Apenas Letras:\n");
    scanf("%s", nome_1);
    printf("Jogador 1 Digite a População da primeira carta - numero inteiro:\n");
    scanf("%d", &populacao_1);
    printf("Jogador 1 Digite a area em Km2 da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &area_1);
    printf("Jogador 1 Digite o Valor do PIB Abreviado em Bilhoes de Reais da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_1);
    printf("Jogador 1 Digite a quantidade de pontos turisticos da primeira carta - numero inteiro:\n");
    scanf("%d", &pontos_turisticos_1);
    printf("\n");

    float Densidade_Populacional_1 = (float)populacao_1 / area_1;
    float PIB_per_Capita_1 = (float)(PIB_1 * 1000000000) / populacao_1;
    
    float inverso_densidade_populacional_1 = 1.0 / Densidade_Populacional_1;

    SuperPoder_A = (float)populacao_1 + area_1 + (float)PIB_1 + (float)pontos_turisticos_1 +
                   PIB_per_Capita_1 + inverso_densidade_populacional_1;

    printf("Jogador 2 digite os dados da Segunda carta.\n");
    printf("Jogador 2 Digite o nome da cidade da Segunda carta - Apenas Letras:\n");
    scanf("%s", nome_2);
    printf("Jogador 2 Digite a Populacao da Segunda carta- numero inteiro:\n");
    scanf("%d", &populacao_2);
    printf("Jogador 2 Digite a area em Km2 da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &area_2);
    printf("Jogador 2 Digite o Valor do PIB Abreviado em Bilhoes de Reais da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_2);
    printf("Jogador 2 Digite a quantidade de pontos turisticos da Segunda carta- numero inteiro:\n");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");

    float Densidade_Populacional_2 = (float)populacao_2 / area_2;
    float PIB_per_Capita_2 = (float)(PIB_2 * 1000000000) / populacao_2;

    float inverso_densidade_populacional_2 = 1.0 / Densidade_Populacional_2;

    SuperPoder_B = (float)populacao_2 + area_2 + (float)PIB_2 + (float)pontos_turisticos_2 +
                   PIB_per_Capita_2 + inverso_densidade_populacional_2;

    // Exibição dos Dados das Cartas:
    printf("abaixo sera exibida os dados da Primeira carta Jogador 1:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Codigo: %c0%d\n", estado_1, codigo_da_cidade_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("Populacao: %d Pessoas\n", populacao_1);
    printf("Area: %.2f Km2\n", area_1);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB_1);
    printf("Numero Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade_Populacional_1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_1);
    printf("Super Poder: %.2f\n", SuperPoder_A);

    printf("\n");

    printf("abaixo sera exibida os dados da Segunda carta Jogador 2:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Codigo: %c0%d\n", estado_1, codigo_da_cidade_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("Populacao: %d Pessoas\n", populacao_2);
    printf("Area: %.2f Km2\n", area_2);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB_2);
    printf("Numero Pontos Turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade_Populacional_2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);
    printf("Super Poder: %.2f\n", SuperPoder_B);

    printf("\n");

    // Comparação de Cartas:
    printf("Comparacao de Cartas:\n");

    // População: Maior é melhor
    printf("Populacao: Carta %s venceu (%d)\n", (populacao_1 > populacao_2) ? "1" : "2", (populacao_1 > populacao_2));

    // Área: Maior é melhor
    printf("Area: Carta %s venceu (%d)\n", (area_1 > area_2) ? "1" : "2", (area_1 > area_2));

    // PIB: Maior é melhor
    printf("PIB: Carta %s venceu (%d)\n", (PIB_1 > PIB_2) ? "1" : "2", (PIB_1 > PIB_2));

    // Pontos Turísticos: Maior é melhor
    printf("Pontos Turisticos: Carta %s venceu (%d)\n", (pontos_turisticos_1 > pontos_turisticos_2) ? "1" : "2", (pontos_turisticos_1 > pontos_turisticos_2));

    // Densidade Populacional: Menor é melhor (lógica invertida)
    printf("Densidade Populacional: Carta %s venceu (%d)\n", (Densidade_Populacional_1 < Densidade_Populacional_2) ? "1" : "2", (Densidade_Populacional_1 < Densidade_Populacional_2));

    // PIB per Capita: Maior é melhor
    printf("PIB per Capita: Carta %s venceu (%d)\n", (PIB_per_Capita_1 > PIB_per_Capita_2) ? "1" : "2", (PIB_per_Capita_1 > PIB_per_Capita_2));

    // Super Poder: Maior é melhor
    printf("Super Poder: Carta %s venceu (%d)\n", (SuperPoder_A > SuperPoder_B) ? "1" : "2", (SuperPoder_A > SuperPoder_B));

    return 0;
}
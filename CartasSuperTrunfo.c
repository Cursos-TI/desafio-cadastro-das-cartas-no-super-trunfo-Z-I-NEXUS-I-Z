#include <stdio.h>

// Desafio Super Trunfo - Cadastramento de cartas 

int main() {
   
    // Variaveis da primeira carta (representados com o 1 no final do nome)

    char estado1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int num_ponto_turistico1;
    float densidade_pop1;
    float pib_pcapita1;
    float super_poder1;

    // Variaveis da segunda carta (representados com o 2 no final do nome)

    char estado2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int num_ponto_turistico2;
    float densidade_pop2;
    float pib_pcapita2;
    float super_poder2;

    // Mensagem de boas vindas com as instruções para cadastrar a primeira carta

    printf ("Olá, seja bem vindo ao Super Trunfo Países, vamos começar cadastrando a primeira carta.\n\n");
    
    printf ("Digite o nome do estado:");
    scanf ("%s", estado1);

    printf ("Digite a população do estado:");
    scanf ("%lu", &populacao1);

    printf ("Digite a área do estado:");
    scanf ("%f", &area1);

    printf ("Digite o pib do estado:");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos:");
    scanf ("%d", &num_ponto_turistico1);

    //Mensagem indicando as instruções para cadastrar a segunda carta

    printf ("\nMuito bem, agora insira os dados da segunda carta.\n\n");

    printf ("Digite o nome do estado:");
    scanf (" %s", estado2);

    printf ("Digite a população do estado:");
    scanf (" %lu", &populacao2);

    printf ("Digite a área do estado:");
    scanf (" %f", &area2);

    printf ("Digite o pib do estado:");
    scanf (" %f", &pib2);

    printf ("Digite o numero de pontos turisticos:");
    scanf (" %d", &num_ponto_turistico2);

    //mensagem indicando sucesso no cadastro e indicando as cartas cadastradas

    printf ("\nCartas cadastradas com sucesso!");
    
    printf ("Cartas cadastradas no momento:\n\n");

    printf ("Carta 1:\n");
    
    printf("Estado: %s\n", estado1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de pontos turísticos: %d\n", num_ponto_turistico1);

    densidade_pop1 = (float) populacao1 / area1;
    printf ("Densidade populacional: %f\n", densidade_pop1);

    pib_pcapita1 = (float) pib1 / populacao1;
    printf ("PIB per capita: %f\n\n", pib_pcapita1);

    printf ("Carta 2:\n");
    
    printf("Estado: %s\n", estado2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Número de pontos turísticos: %d\n", num_ponto_turistico2);

    densidade_pop2 = (float) populacao2 / area2;
    printf ("Densidade populacional: %f\n", densidade_pop2);

    pib_pcapita2 = (float) pib2 / populacao2;
    printf ("PIB per capita: %f\n\n", pib_pcapita2);

    //Cálculo do super poder das duas cartas e exibição na tela
    super_poder1 = (float) populacao1 + area1 + pib1 + num_ponto_turistico1 + pib_pcapita1 + (1.0 / densidade_pop1);
    super_poder2 = (float) populacao2 + area2 + pib2 + num_ponto_turistico2 + pib_pcapita2 + (1.0 / densidade_pop2);
    
    printf ("O super poder de %s é: %f\n", estado1, super_poder1);
    printf ("O super poder de %s é: %f\n\n", estado2, super_poder2);

    //Compara as duas cartas e exibe o resultado 
    printf("Hora de comparar as cartas! (1= carta 1 vence, 0= carta 2 vence)\n\n");
    
    printf ("População = %d\n", populacao1 > populacao2);
    printf ("Área = %d\n", area1 > area2);
    printf ("Pib = %d\n", pib1 > pib2);
    printf ("Número de pontos turísticos = %d\n", num_ponto_turistico1 > num_ponto_turistico2);
    printf ("Densidade populacional = %d\n", densidade_pop1 < densidade_pop2);
    printf ("PIB per capita = %d\n", pib_pcapita1 > pib_pcapita2);
    printf ("Super poder = %d\n", super_poder1 > super_poder2);

    return 0;
}


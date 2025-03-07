#include <stdio.h>

// Desafio Super Trunfo - Cadastramento de cartas 

int main() {
   
    // Variaveis da primeira carta (representados com o 1 no final do nome)

    char estado1 [20];
    int populacao1;
    float area1;
    float pib1;
    int num_ponto_turistico1;

    // Variaveis da segunda carta (representados com o 2 no final do nome)

    char estado2 [20];
    int populacao2;
    float area2;
    float pib2;
    int num_ponto_turistico2;

    // Mensagem de boas vindas com as instruções para cadastrar a primeira carta

    printf ("Olá, seja bem vindo ao Super Trunfo Países, vamos começar cadastrando a primeira carta.\n");
    
    printf ("Digite o nome do estado:");
    scanf (" %s", estado1);

    printf ("Digite a população do estado:");
    scanf (" %d", &populacao1);

    printf ("Digite a área do estado:");
    scanf (" %f", &area1);

    printf ("Digite o pib do estado:");
    scanf (" %f", &pib1);

    //Mensagem indicando as instruções para cadastrar a segunda carta

    printf ("Muito bem, agora insira os dados da segunda carta.\n");

    printf ("Digite o nome do estado:");
    scanf (" %s", estado2);

    printf ("Digite a população do estado:");
    scanf (" %d", &populacao2);

    printf ("Digite a área do estado:");
    scanf (" %f", &area2);

    printf ("Digite o pib do estado:");
    scanf (" %f", &pib2);

    //mensagem indicando sucesso no cadastro e indicando as cartas cadastradas

    printf ("Cartas cadastradas com sucesso!");
    
    printf ("Cartas cadastradas no momento:\n");

    printf ("Carta 1:\n");
    
    printf(" %s", estado1);
    printf (" %d", &populacao1);
    printf (" %f", &area1);
    printf (" %f", &pib1);

    printf ("Carta 2:\n");
    
    printf(" %s", estado2);
    printf (" %d", &populacao2);
    printf (" %f", &area2);
    printf (" %f", &pib2);

    return 0;
}


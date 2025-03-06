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

    printf ("Bem vindo ao Super Trunfo Países, vamos começar cadastrando a primeira carta.\n");
    
    printf ("Digite o nome do estado:\n");
    scanf (" %s", estado1);

    printf ("Digite a população do estado:\n");
    scanf (" %s", populacao1);

    printf ("Digite a área do estado:\n");
    scanf (" %s", area1);

    printf ("Digite o pib do estado:\n");
    scanf (" %s ");
    return 0;
}


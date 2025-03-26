#include <stdio.h>

// Desafio Super Trunfo - Cadastramento de cartas 

int main() {
    //variavel do menu interativo da escolha de atributo para comparar

    int menu;
    // Variaveis da primeira carta (representados com o 1 no final do nome)

    char pais1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int num_ponto_turistico1;
    float densidade_pop1;
    float pib_pcapita1;
    float super_poder1;

    // Variaveis da segunda carta (representados com o 2 no final do nome)

    char pais2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int num_ponto_turistico2;
    float densidade_pop2;
    float pib_pcapita2;
    float super_poder2;

    // mensagem de boas vindas e cadastramento das cartas

    printf ("*** Olá, seja bem vindo ao Super Trunfo Países! *** \n\n");
    printf ("Vamos cadastrar a primeira carta.\n\n");

    printf ("Digite o nome do país:");
    scanf ("%s", pais1);

    printf ("Digite a população do país:");
    scanf ("%lu", &populacao1);

    printf ("Digite a área do país:");
    scanf ("%f", &area1);

    printf ("Digite o pib do país:");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos:");
    scanf ("%d", &num_ponto_turistico1);

    //Mensagem indicando as instruções para cadastrar a segunda carta

    printf ("\nMuito bem, agora insira os dados da segunda carta.\n\n");

    printf ("Digite o nome do país:");
    scanf (" %s", pais2);

    printf ("Digite a população do país:");
    scanf (" %lu", &populacao2);

    printf ("Digite a área do país:");
    scanf (" %f", &area2);

    printf ("Digite o pib do país:");
    scanf (" %f", &pib2);

    printf ("Digite o numero de pontos turisticos:");
    scanf (" %d", &num_ponto_turistico2);

    //mensagem indicando sucesso no cadastro e indicando as cartas cadastradas

    printf ("\nCartas cadastradas com sucesso!");
    
    printf ("Cartas cadastradas no momento:\n\n");

    printf ("Carta 1:\n");
    
    printf("País: %s\n", pais1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de pontos turísticos: %d\n", num_ponto_turistico1);

    densidade_pop1 = (float) populacao1 / area1;
    printf ("Densidade populacional: %f\n", densidade_pop1);

    pib_pcapita1 = (float) pib1 / populacao1;
    printf ("PIB per capita: %f\n\n", pib_pcapita1);

    printf ("Carta 2:\n");
    
    printf("País: %s\n", pais2);
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
    
    printf ("O super poder de %s é: %f\n", pais1, super_poder1);
    printf ("O super poder de %s é: %f\n\n", pais2, super_poder2);

    //Menu interativo para escolha do atributo de comparação 
    printf ("Agora é a hora do duelo!\n\n");
    
    printf ("Ecolha um atributo para comparação (digite apenas o número da opção).\n\n");
    
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional\n");
    printf ("6. PIB per capita\n");
    printf ("7. Super poder\n\n");

    scanf (" %d", &menu);

    switch (menu) {
        case 1: 
            if (populacao1 > populacao2) {
                printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                printf ("%s venceu no atributo População!\n", pais1);
            }
            else {
                printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                printf ("%s venceu no atributo População!\n", pais2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                printf ("%s venceu no atributo Área!\n", pais1);
            }
            else {
                printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                printf ("%s venceu no atributo Área!\n", pais2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                printf ("%s venceu no atributo PIB!\n", pais1);
            }
            else {
                printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                printf ("%s venceu no atributo PIB!\n", pais2);
            }
            break;
        case 4:
            if (num_ponto_turistico1 > num_ponto_turistico2) {
                printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                printf ("%s venceu no atributo Número de pontos turísticos!\n", pais1);
            }
            else {
                printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                printf ("%s venceu no atributo Número de pontos turísticos!\n", pais2);
            }
            break;
        case 5:
            if (densidade_pop1 < densidade_pop2) {
                printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                printf ("%s venceu no atributo Densidade populacional!\n", pais1);
            }
            else {
                printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                printf ("%s venceu no atributo Densidade populacional!\n", pais2);
            }
            break;
        case 6:
            if (pib_pcapita1 > pib_pcapita2) {
                printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                printf ("%s venceu no atributo PIB per capita!\n", pais1);
            }
            else {
                printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                printf ("%s venceu no atributo PIB per capita!\n", pais2);
            }
            break;
        case 7:
            if (super_poder1 > super_poder2) {
                printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                printf ("%s venceu no atributo Super poder!\n", pais1);
            }
            else {
                printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                printf ("%s venceu no atributo Super poder!\n", pais2);
            }
            break;
        default:
            printf ("Opção inválida!\n");
            break;
    }

    return 0;
}
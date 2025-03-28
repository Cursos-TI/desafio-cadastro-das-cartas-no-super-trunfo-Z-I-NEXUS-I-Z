#include <stdio.h>

// Desafio Super Trunfo - Cadastramento de cartas 

int main() {
    //variavel do menu interativo da escolha de atributo para comparar

    int menu1, menu2;

    //Variaveis dos resultados

    int resultado1, resultado2;

    // Variaveis da primeira carta (representados com o 1 no final do nome)

    char pais1 [20] = "Brasil";
    unsigned long int populacao1 = 8000;
    float area1 = 8500;
    float pib1 = 7500;
    int num_ponto_turistico1 = 7000;
    float densidade_pop1 = 3000;
    float pib_pcapita1 = 5000;
    float super_poder1 = (float) populacao1 + area1 + pib1 + num_ponto_turistico1 + pib_pcapita1 + (1.0 / densidade_pop1);

    // Variaveis da segunda carta (representados com o 2 no final do nome)

    char pais2 [20] = "México";
    unsigned long int populacao2 = 6500;
    float area2 = 6000;
    float pib2 = 7000;
    int num_ponto_turistico2 = 7500;
    float densidade_pop2 = 5000;
    float pib_pcapita2 = 5500;
    float super_poder2 = (float) populacao2 + area2 + pib2 + num_ponto_turistico2 + pib_pcapita2 + (1.0 / densidade_pop2);

    // mensagem de boas vindas e indicação das cartas 

    printf ("*** Olá, seja bem vindo ao Super Trunfo Países! *** \n\n");
    
    printf ("Jogador 1: Você jogará com a carta Brasil.\n\n");

    printf ("Nome do país: %s\n", pais1);

    printf ("População do país: %lu\n", populacao1);

    printf ("Área do país: %.2f\n", area1);

    printf ("PIB do país: %.2f\n", pib1);

    printf ("PIB per capita: %.2f\n", pib_pcapita1);

    printf ("Densidade populacional: %.2f", densidade_pop1);

    printf ("Número de pontos turísticos: %d\n", num_ponto_turistico1);

    printf ("Super poder (soma de todos os atributos): %.2f\n", super_poder1);

    //Mensagem indicando qual a segunda carta

    printf ("\nJogador 2: Você jogará com a carta México.\n\n");

    printf ("Nome do país: %s\n", pais2);

    printf ("População do país: %lu\n", populacao2);

    printf ("Área do país: %.2f\n", area2);

    printf ("PIB do país: %.2f\n", pib2);

    printf ("PIB per capita: %.2f\n", pib_pcapita2);

    printf ("Densidade populacional: %.2f", densidade_pop2);

    printf ("Número de pontos turísticos: %d\n", num_ponto_turistico2);

    printf ("Super poder (soma de todos os atributos): %.2f\n", super_poder2);

    //menu para a escolha do primeiro atributo a ser comparado

    printf ("Ecolha o primeiro atributo para comparação (digite apenas o número da opção).\n\n");
    
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional (o menor valor vence)\n");
    printf ("6. PIB per capita\n");
    printf ("7. Super poder\n\n");

    scanf (" %d", &menu1);

    switch (menu1) {
        case 1: 
            if (populacao1 > populacao2) {
                resultado1 = 1;     
                printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                printf ("%s venceu a primeira rodada no atributo População!\n", pais1);
            } 
            else if (populacao1 == populacao2) {
                resultado1 = 0;
                printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                printf ("%s venceu a primeira rodada no atributo População!\n", pais2);
            }
            break;
        case 2:
            if (area1 > area2) {
                resultado1 = 1;
                printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                printf ("%s venceu a primeira rodada no atributo Área!\n", pais1);
            } 
            else if (area1 == area2) {
                resultado1 = 0;
                printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                printf ("%s venceu a primeira rodada no atributo Área!\n", pais2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                resultado1 = 1;
                printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                printf ("%s venceu a primeira rodada no atributo PIB!\n", pais1);
            } 
            else if (pib1 == pib2) {
                resultado1 = 0;
                printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                printf ("%s venceu a primeira rodada no atributo PIB!\n", pais2);
            }
            break;
        case 4:
            if (num_ponto_turistico1 > num_ponto_turistico2) {
                resultado1 = 1;
                printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                printf ("%s venceu a primeira rodada no atributo Número de pontos turísticos!\n", pais1);
            } 
            else if (num_ponto_turistico1 == num_ponto_turistico2) {
                resultado1 = 0;
                printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                printf ("%s venceu a primeira rodada no atributo Número de pontos turísticos!\n", pais2);
            }
            break;
        case 5:
            if (densidade_pop1 < densidade_pop2) {
                resultado1 = 1;
                printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                printf ("%s venceu a primeira rodada no atributo Densidade populacional!\n", pais1);
            } 
            else if (densidade_pop1 == densidade_pop2) {
                resultado1 = 0;
                printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                printf ("Empate na primeira rodada! \n");
            } 
            else {
                resultado1 = 2;
                printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                printf ("%s venceu a primeira rodada no  atributo Densidade populacional!\n", pais2);
            }
            break;
        case 6:
            if (pib_pcapita1 > pib_pcapita2) {
                resultado1 = 1;
                printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                printf ("%s venceu a primeira rodada no atributo PIB per capita!\n", pais1);
            } 
            else if (pib_pcapita1 == pib_pcapita2) {
                resultado1 = 0;
                printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                printf ("%s venceu a primeira rodada no atributo PIB per capita!\n", pais2);
            }
            break;
        case 7:
            if (super_poder1 > super_poder2) {
                resultado1 = 1;
                printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                printf ("%s venceu a primeira rodada no atributo Super poder!\n", pais1);
            } 
            else if (super_poder1 == super_poder2) {
                resultado1 = 0;
                printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                printf ("Empate na primeira rodada!\n");
            } 
            else {
                resultado1 = 2;
                printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                printf ("%s venceu a primeira rodada no atributo Super poder!\n", pais2);
            }
            break;
        default:
            printf ("Opção inválida!\n");
            break;
    }
    printf ("Ecolha o segundo atributo para comparação, diferente do primeiro!!! (digite apenas o número da opção).\n\n");
    
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Número de pontos turísticos\n");
    printf ("5. Densidade populacional (o menor valor vence)\n");
    printf ("6. PIB per capita\n");
    printf ("7. Super poder\n\n");

    scanf (" %d", &menu2);

    if (menu1 == menu2) {
        printf ("Você escolheu o mesmo atributo!!!");
    }
    else {
        switch (menu2) {
            case 1: 
                if (populacao1 > populacao2) {
                    resultado2 = 1;     
                    printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                    printf ("%s venceu a primeira rodada no atributo População!\n", pais1);
                } 
                else if (populacao1 == populacao2) {
                    resultado2 = 0;
                    printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("População de %s: %lu  X  população de %s: %lu\n", pais1, populacao1, pais2, populacao2);
                    printf ("%s venceu a primeira rodada no atributo População!\n", pais2);
                }
                break;
            case 2:
                if (area1 > area2) {
                    resultado2 = 1;
                    printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                    printf ("%s venceu a primeira rodada no atributo Área!\n", pais1);
                } 
                else if (area1 == area2) {
                    resultado2 = 0;
                    printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("Área de %s: %f  X  área de %s: %f\n", pais1, area1, pais2, area2);
                    printf ("%s venceu a primeira rodada no atributo Área!\n", pais2);
                }
                break;
            case 3:
                if (pib1 > pib2) {
                    resultado2 = 1;
                    printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                    printf ("%s venceu a primeira rodada no atributo PIB!\n", pais1);
                } 
                else if (pib1 == pib2) {
                    resultado2 = 0;
                    printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("PIB de %s: %f  X  PIB de %s: %f\n", pais1, pib1, pais2, pib2);
                    printf ("%s venceu a primeira rodada no atributo PIB!\n", pais2);
                }
                break;
            case 4:
                if (num_ponto_turistico1 > num_ponto_turistico2) {
                    resultado2 = 1;
                    printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                    printf ("%s venceu a primeira rodada no atributo Número de pontos turísticos!\n", pais1);
                } 
                else if (num_ponto_turistico1 == num_ponto_turistico2) {
                    resultado2 = 0;
                    printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("Número de pontos turísticos de %s: %d  X  número de pontos turísticos de %s: %d\n", pais1, num_ponto_turistico1, pais2, num_ponto_turistico2);
                    printf ("%s venceu a primeira rodada no atributo Número de pontos turísticos!\n", pais2);
                }
                break;
            case 5:
                if (densidade_pop1 < densidade_pop2) {
                    resultado2 = 1;
                    printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                    printf ("%s venceu a primeira rodada no atributo Densidade populacional!\n", pais1);
                } 
                else if (densidade_pop1 == densidade_pop2) {
                    resultado2 = 0;
                    printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                    printf ("Empate na primeira rodada! \n");
                } 
                else {
                    resultado2 = 2;
                    printf ("Densidade populacional de %s: %f  X  densidade populacional de %s: %f\n", pais1, densidade_pop1, pais2, densidade_pop2);
                    printf ("%s venceu a primeira rodada no  atributo Densidade populacional!\n", pais2);
                }
                break;
            case 6:
                if (pib_pcapita1 > pib_pcapita2) {
                    resultado2 = 1;
                    printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                    printf ("%s venceu a primeira rodada no atributo PIB per capita!\n", pais1);
                } 
                else if (pib_pcapita1 == pib_pcapita2) {
                    resultado2 = 0;
                    printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("PIB per capita de %s: %f  X  PIB per capita de %s: %f\n", pais1, pib_pcapita1, pais2, pib_pcapita2);
                    printf ("%s venceu a primeira rodada no atributo PIB per capita!\n", pais2);
                }
                break;
            case 7:
                if (super_poder1 > super_poder2) {
                    resultado2 = 1;
                    printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                    printf ("%s venceu a primeira rodada no atributo Super poder!\n", pais1);
                } 
                else if (super_poder1 == super_poder2) {
                    resultado2 = 0;
                    printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                    printf ("Empate na primeira rodada!\n");
                } 
                else {
                    resultado2 = 2;
                    printf ("Super poder de %s: %f  X  super poder de %s: %f\n", pais1, super_poder1, pais2, super_poder2);
                    printf ("%s venceu a primeira rodada no atributo Super poder!\n", pais2);
                }
                break;
            default:
                printf ("Opção inválida!\n");
                break;
        }
          //resultado final do jogo
        if (resultado1 == 1 && resultado2 == 1) {
            printf ("\nJogador 1 venceu as duas rodadas, Jogador 1 ganhou o jogo parabéns!");
        }
        else if (resultado1 == 2 && resultado2 == 2) {
            printf ("\nJogador 2 venceu as duas rodadas, Jogador 2 ganhou o jogo parabéns!");
        }
        else if (resultado1 == 0 && resultado2 == 0) {
            printf ("\nDuas rodadas empatadas, o jogo empatou!");
        }
        else if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
            printf ("\nJogador 1 venceu uma rodada e a outra empatou, Jogador 1 ganhou o jogo!");
        }
        else if ((resultado1 == 2 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 2)) {
            printf ("\nJogador 2 venceu uma rodada e a outra empatou, Jogador 2 ganhou o jogo!");
        }
        else if ((resultado1 == 1 && resultado2 == 2) || (resultado1 == 2 && resultado2 == 1)) {
            printf ("\nOs dois jogadores venceram uma rodada, o jogo empatou!");
        }
        else {
            printf ("Erro, tente novamente");
        }

        
    return 0;
}
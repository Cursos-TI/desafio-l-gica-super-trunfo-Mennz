#include <stdio.h>

int main() {
   
    char estado1, estado2;
    int cidade1, cidade2;
    float populacao1, area1, pib1;
    int pontos1;
    float densidade1, pibpc1;
    float populacao2, area2, pib2;
    int pontos2;
    float densidade2, pibpc2;

    int opcao;
    char codigo1[5], codigo2[5]; //codigo da cidade (tenho que aprender a usar melhor)

    while (1) { //menu principal e while para fazer o loop do menu
        printf("\n*** Menu principal ***\n");
        printf("1. Jogar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) { // switch do menu principal
            case 1:
                    // Informações da Carta 1
                printf("\n*** Informações da Carta 1 ***\n");
                printf("Digite a letra do estado: ");
                    scanf(" %c", &estado1);
                printf("Digite o número da cidade: ");
                    scanf("%d", &cidade1);
                printf("Digite a população (em milhões): ");
                    scanf("%f", &populacao1);
                printf("Digite a área da cidade (em km²): ");
                    scanf("%f", &area1);
                printf("Digite o PIB (em bilhões): ");
                    scanf("%f", &pib1);
                printf("Digite o número de pontos turísticos: ");
                    scanf("%d", &pontos1);

                    //conversão de valores carta 1
                populacao1 *= 1000000;
                pib1 *= 1000000000;
                densidade1 = populacao1 / area1;
                pibpc1 = pib1 / populacao1;
                sprintf(codigo1, "%c%02d", estado1, cidade1);

                    // informações da Carta 2
                printf("\n*** Informações da Carta 2 ***\n");
                printf("Digite a letra do estado: ");
                    scanf(" %c", &estado2);
                printf("Digite o número da cidade: ");
                    scanf("%d", &cidade2);
                printf("Digite a população (em milhões): ");
                    scanf("%f", &populacao2);
                printf("Digite a área da cidade (em km²): ");
                    scanf("%f", &area2);
                printf("Digite o PIB (em bilhões): ");
                    scanf("%f", &pib2);
                printf("Digite o número de pontos turísticos: ");
                    scanf("%d", &pontos2);

                    //conversão dos valores da carta 2
                populacao2 *= 1000000;
                pib2 *= 1000000000;
                densidade2 = populacao2 / area2;
                pibpc2 = pib2 / populacao2;
                sprintf(codigo2, "%c%02d", estado2, cidade2);

                    //informações das cartas
                printf("\n*** CARTAS ***\n");
                printf("\nCidade 1: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.0f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n",
                    codigo1, populacao1, area1, pib1, pontos1, densidade1, pibpc1);
                printf("\nCidade 2: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.0f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n",
                    codigo2, populacao2, area2, pib2, pontos2, densidade2, pibpc2);

                    //  comparação das cartas
                while (1) {
                    printf("\n*** Escolha quais cartas quer comparar ***\n");
                    printf("1 - Densidade Populacional\n");
                    printf("2 - População\n");
                    printf("3 - Área\n");
                    printf("4 - PIB\n");
                    printf("5 - Pontos Turísticos\n");
                    printf("6 - PIB per Capita\n");
                    printf("7 - Voltar ao menu principal\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &opcao);

                    switch (opcao) {
                        case 1:
                            printf("\n**Densidade Populacional**: ");
                            if (densidade1 < densidade2) printf("%s venceu (menor densidade)\n", codigo1);
                            else if (densidade1 > densidade2) printf("%s venceu (menor densidade)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 2:
                            printf("\n**População**: ");
                            if (populacao1 > populacao2) printf("%s venceu (maior população)\n", codigo1);
                            else if (populacao1 < populacao2) printf("%s venceu (maior população)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 3:
                            printf("\n**Área**: ");
                            if (area1 > area2) printf("%s venceu (maior área)\n", codigo1);
                            else if (area1 < area2) printf("%s venceu (maior área)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 4:
                            printf("\n**PIB**: ");
                            if (pib1 > pib2) printf("%s venceu (maior PIB)\n", codigo1);
                            else if (pib1 < pib2) printf("%s venceu (maior PIB)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 5:
                            printf("\n**Pontos Turísticos**: ");
                            if (pontos1 > pontos2) printf("%s venceu (mais pontos turísticos)\n", codigo1);
                            else if (pontos1 < pontos2) printf("%s venceu (mais pontos turísticos)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 6:
                            printf("\n**PIB per Capita**: ");
                            if (pibpc1 > pibpc2) printf("%s venceu (maior PIB per capita)\n", codigo1);
                            else if (pibpc1 < pibpc2) printf("%s venceu (maior PIB per capita)\n", codigo2);
                            else printf("Empate!\n");
                                break;

                        case 7:
                            printf("\nVoltando ao menu principal...\n");
                            break;

                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                    }
                    if (opcao == 7) { //quando o jogador quiser voltar para o menu
                        break;
                    }
        
                }

                menu_principal: //voltar ao menu principal
                break;

            case 2:
                printf("\n*** Regras do jogo ***\n");
                printf("Digite os dados de duas cidades e escolha quais atributos comparar.\n");
                printf("A que tiver maior valor vence, exceto na densidade, onde vence a menor.\n");
                printf("Bom jogo!\n");
                break;

            case 3:
                printf("Saindo...\n");
                return 0; //fecha o jogo

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }
}

#include <stdio.h>

int main() {
    char estado1[20], cidade1[20];
    int codigoCarta1, pontos1, opcao;
    float populacao1, area1, pib1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;
    char estado2[50], cidade2[50];
    int pontos2, codigoCarta2;
    float populacao2, area2, pib2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;


    printf("Bem-Vindo ao jogo Super Trunfo!!\n\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Informações da Carta 1: \n\n");
        printf("Digite o Código da Carta 1: \n");
        scanf("%d", &codigoCarta1);
        printf("Digite o Estado: \n");
        scanf("%s", &estado1);
        printf("Digite a Cidade: \n");
        scanf("%s", &cidade1);
        printf("Digite a População da carta 1:\n");
        scanf("%d", &populacao1);
        printf("Digite a Área da carta 1:\n");
        scanf("%d", &area1);
        printf("Digite o PIB da Carta 1:\n");
        scanf("%d", &pib1);

        printf("Informações da Carta 2: \n\n");
        printf("Digite o Código da Carta 2: \n");
        scanf("%s", &codigoCarta2);
        printf("Digite o Estado: \n");
        scanf("%s", &estado2);
        printf("Digite a Cidade: \n");
        scanf("%s", &cidade2);
        printf("Digite a População da carta 2:\n");
        scanf("%d", &populacao2);
        printf("Digite a Área da carta 2:\n");
        scanf("%d", &area2);
        printf("Digite o PIB da Carta 2:\n");
        scanf("%d", &pib2);


        densidadePopulacional1 = populacao1 / area1;
        pibPerCapita1 = pib1 / populacao1;
        
        printf("A densidade populacional da Carta 1 é: %f\n", densidadePopulacional1);
        printf("O Pib Per Capita da Carta 1 é: %f\n\n", pibPerCapita1);
        
        densidadePopulacional2 = populacao2 / area2;
        pibPerCapita2 = pib2 / populacao2;
    
        printf("A densidade populacional da Carta 2 é: %f\n", densidadePopulacional2);
        printf("O Pib Per Capita da Carta 2 é: %f\n\n", pibPerCapita2);

            break;
    case 2:
        printf("Regras do Jogo Super Trunfo: \n\n");
        printf("1- Preencha todos os Campos para nós lhe ajudar a saber qual carta é a melhor!\n");
        printf("2- O código da carta é a primeira letra do Estado com o número da carta. Ex: Paraná, São josé dos Pinhais (P02)\n");
        printf("3- Jogue para se divertir!\n\n");
        printf("Obrigado!!\n");
            break;
    case 3:
        printf("Saindo do Jogo, Obrigado!\n");
            break;
    default:
        printf("Opção inválida!\n");
            break;
        }


        printf("Agora escolha qual prorpiedade você quer comparar\n\n");
        printf("1- Comparar População e Área:\n");
        printf("2- Comparar Pib e Pontos:\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
           printf("Digite a população da carta 1: \n");
           scanf("%d", &populacao1);
           printf("Digite a população da carta 2: \n");
           scanf("%d", &populacao2);
           printf("Digite a área da carta 1: \n");
           scanf("%d", &area1);
           printf("Digite a área da carta 2: \n");
           scanf("%d", &area2);

        populacao1 > populacao2 ? printf("Carta 1 tem população maior que carta 2!\n") : printf("Carta 2 tem população maior que carta 1!\n");
        
        area1 > area2 ? printf("Carta 1 tem mais área que a Carta 2!\n") : printf("Carta 2 tem mais área que a Carta 1!\n"); 

            break;
        case 2:
        printf("Digite o PIB da carta 1: \n");
        scanf("%d", &pib1);
        printf("Digite o PIB da carta 2: \n");
        scanf("%d", &pib2);
        printf("Digite a quantidade de Pontos Turísticos da carta 1: \n");
        scanf("%d", &pontos1);
        printf("Digite a quantidade de Pontos Turísticos da carta 2: \n");
        scanf("%d", &pontos2);

        pib1 > pib2 ? printf("Carta 1 tem o pib maior que carta 2!\n") : printf("Carta 2 tem maior população que carta 1!\n");
        
        area1 > area2 ? printf("Carta 1 tem mais Pontos Turísticos que a Carta 2!\n\n") : printf("Carta 2 tem mais Pontos Turísticos que a Carta 1!\n\n"); 
            break;
        default:
                printf("Opção inválida!\n");
            break;
        }


    return 0;
} 
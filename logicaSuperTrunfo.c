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
        printf("População: \n");
        scanf("%f", &populacao1);
        printf("Qual a área: \n");
        scanf("%f", &area1);
        printf("Qual o PIB: \n");
        scanf("%f", &pib1);
        printf("Quantos pontos turísticos: \n");
        scanf("%d", &pontos1);
        printf("Informações da Carta 2: \n\n");
        printf("Digite o Código da Carta 2: \n");
        scanf("%s", &codigoCarta2);
        printf("Digite o Estado: \n");
        scanf("%s", &estado2);
        printf("Digite a Cidade: \n");
        scanf("%s", &cidade2);
        printf("População: \n");
        scanf("%f", &populacao2);
        printf("Qual a área: \n");
        scanf("%f", &area2);
        printf("Qual o PIB: \n");
        scanf("%f", &pib2);
        printf("Quantos pontos turísticos: \n");
        scanf("%d", &pontos2);
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
    
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    
    printf("A densidade populacional da Carta 1 é: %.1f\n", densidadePopulacional1);
    printf("O Pib Per Capita da Carta 1 é: %.1f\n\n", pibPerCapita1);
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("A densidade populacional da Carta 2 é: %.1f\n", densidadePopulacional2);
    printf("O Pib Per Capita da Carta 2 é: %.1f\n\n", pibPerCapita2);

        printf("Agora escolha qual prorpiedade você quer comparar\n\n");
        printf("1- Comparar População \n");
        printf("2- Comparar Área \n");
        printf("3- Comparar Pib \n");
        printf("4- Comparar Pontos \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (populacao1 >= populacao2)
            {
                printf("Carta 1 é melhor que carta 2!\n");
            } else {
                printf("Carta 2 é melhor que carta 1!\n");
            }
            break;
        case 2:
            if (area1 >= area2)
            {
                printf("Carta 1 é melhor que carta 2!\n");
            } else {
                printf("Carta 2 é melhor que carta 1!\n");
            }
            break;
        case 3:
            if (pib1 >= pib2)
            {  
                printf("Carta 1 é melhor que carta 2!\n");
            } else {
                printf("Carta 2 é melhor que carta 1!\n");
            }
            break;
        case 4:
            if (pontos1 >= pontos2)
            {
                printf("Carta 1 é melhor que carta 2!\n");
            } else {
                printf("Carta 2 é melhor que carta 1!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

        


    return 0;
} 
#include <stdio.h>

int main() {
    int pais, estado, cidade, pontos, opcao;
    float populacao, area, pib;


    printf("Bem-Vindo ao jogo Super Trunfo!!\n\n");
    printf("1 - Jogar\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o País: \n");
        scanf("%d", &pais);
        printf("Digite o Estado: \n");
        scanf("%d", &estado);
        printf("Digite a Cidade: \n");
        scanf("%d", &cidade);
        printf("População: \n");
        scanf("%f", &populacao);
        printf("Qual a área: \n");
        scanf("%f", &area);
        printf("Qual o PIB: \n");
        scanf("%f", &pib);
        printf("Quantos pontos turísticos: \n");
        scanf("%d", &pontos);
            break;
    case 2:
        printf("Regras do Jogo Super Trunfo: \n\n");
        printf("1- Preencha todos os Campos para nós lhe ajudar a saber qual carta é a melhor!\n");
        printf("2- O código da carta é a primeira letra do Estado com o número da carta. Ex: Paraná, São josé dos Pinhais (P02)\n");
        printf("3- Jogue para se divertir!\n\n");
        printf("Obrigado!!");
            break;
    case 3:
        printf("Saindo do Jogo, Obrigado!\n");
            break;
    default:
        printf("Opção inválida!\n");
            break;
        }
    



    return 0;
}
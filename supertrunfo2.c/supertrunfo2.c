#include <stdio.h>

int main() {

    // Carta 1
    char pais1[] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767;
    float pib1 = 1868.0;
    int pontos1 = 50;

    // Carta 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400;
    float pib2 = 632.0;
    int pontos2 = 35;

    // Densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int op1, op2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];

    // MENU PRIMEIRO ATRIBUTO
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &op1);

    // Guarda valores do primeiro atributo
    switch(op1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            sprintf(nomeAtributo1, "População");
            break;

        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            sprintf(nomeAtributo1, "Área");
            break;

        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            sprintf(nomeAtributo1, "Pontos turísticos");
            break;

        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            sprintf(nomeAtributo1, "Densidade");
            break;

        default:
            printf("Opção inválida\n");
            return 0;
    }

    // MENU SEGUNDO ATRIBUTO
    printf("\nEscolha o SEGUNDO atributo:\n");

    if(op1 != 1) printf("1 - População\n");
    if(op1 != 2) printf("2 - Área\n");
    if(op1 != 3) printf("3 - PIB\n");
    if(op1 != 4) printf("4 - Pontos turísticos\n");
    if(op1 != 5) printf("5 - Densidade demográfica\n");

    scanf("%d", &op2);

    if(op1 == op2){
        printf("Não pode repetir atributo!\n");
        return 0;
    }

    switch(op2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            sprintf(nomeAtributo2, "População");
            break;

        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            sprintf(nomeAtributo2, "Área");
            break;

        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            sprintf(nomeAtributo2, "Pontos turísticos");
            break;

        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            sprintf(nomeAtributo2, "Densidade");
            break;

        default:
            printf("Opção inválida\n");
            return 0;
    }

    // AJUSTE DENSIDADE (MENOR VENCE)
    if(op1 == 5){
        valor1_c1 = 1 / valor1_c1;
        valor1_c2 = 1 / valor1_c2;
    }

    if(op2 == 5){
        valor2_c1 = 1 / valor2_c1;
        valor2_c2 = 1 / valor2_c2;
    }

    // SOMA
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // RESULTADO
    printf("\nComparação entre %s e %s\n", pais1, pais2);

    printf("\nAtributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor1_c1, pais2, valor1_c2);

    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor2_c1, pais2, valor2_c2);

    printf("\nSoma %s: %.2f\n", pais1, soma1);
    printf("Soma %s: %.2f\n", pais2, soma2);

    // Operador ternário para vencedor
    printf("\nResultado: %s\n",
        (soma1 > soma2) ? "Brasil venceu!"
        : (soma2 > soma1) ? "Argentina venceu!"
        : "Empate!"
    );

    return 0;
}

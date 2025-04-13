#include <stdio.h>

int main() {
    // Dados da carta 1 (Brasil)
    char nome1[] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1839.8;
    int pontosTuristicos1 = 5;
    float densidade1 = 24.8;

    // Dados da carta 2 (Canadá)
    char nome2[] = "Canadá";
    int populacao2 = 37590000;
    float area2 = 9984670.0;
    float pib2 = 1643.4;
    int pontosTuristicos2 = 4;
    float densidade2 = 3.8;

    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // Menu do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção (1 a 5): ");
    scanf("%d", &escolha1);

    // Menu do segundo atributo (dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &escolha2);

    printf("\nComparando: %s vs %s\n", nome1, nome2);

    // Função simplificada para buscar valor do atributo 1
    switch (escolha1) {
        case 1:
            printf("Atributo 1: População\n");
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            printf("Atributo 1: Área\n");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            printf("Atributo 1: PIB\n");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 1: Pontos Turísticos\n");
            valor1_carta1 = pontosTuristicos1;
            valor1_carta2 = pontosTuristicos2;
            break;
        case 5:
            printf("Atributo 1: Densidade Demográfica (menor vence)\n");
            valor1_carta1 = -densidade1;  // inverte para facilitar comparação
            valor1_carta2 = -densidade2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Função simplificada para buscar valor do atributo 2
    switch (escolha2) {
        case 1:
            printf("Atributo 2: População\n");
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            printf("Atributo 2: Área\n");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            printf("Atributo 2: PIB\n");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 2: Pontos Turísticos\n");
            valor2_carta1 = pontosTuristicos1;
            valor2_carta2 = pontosTuristicos2;
            break;
        case 5:
            printf("Atributo 2: Densidade Demográfica (menor vence)\n");
            valor2_carta1 = -densidade1;
            valor2_carta2 = -densidade2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Exibe os valores reais (não invertidos)
    printf("\nValores dos atributos:\n");
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f\n", nome1, (escolha1 == 5 ? -valor1_carta1 : valor1_carta1), (escolha2 == 5 ? -valor2_carta1 : valor2_carta1));
    printf("%s - Atributo 1: %.2f | Atributo 2: %.2f\n", nome2, (escolha1 == 5 ? -valor1_carta2 : valor1_carta2), (escolha2 == 5 ? -valor2_carta2 : valor2_carta2));

    // Soma dos atributos (já considerando inversão de densidade)
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Resultado final com operador ternário
    printf("\nResultado da rodada:\n");
    soma1 > soma2 ? printf("Vencedor: %s\n", nome1) :
    soma2 > soma1 ? printf("Vencedor: %s\n", nome2) :
    printf("Empate!\n");

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Variáveis para guardar as opções escolhidas no menu
    int opcao1, opcao2;

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valorAtributo1Carta1, valorAtributo1Carta2;
    float valorAtributo2Carta1, valorAtributo2Carta2;

    // Variáveis para armazenar a soma final
    float somaCarta1, somaCarta2;

    // Variáveis para armazenar o nome dos atributos
    // Usamos ponteiros simples para textos fixos
    char *nomeAtributo1;
    char *nomeAtributo2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e do PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados cadastrados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Neste nível, o jogador escolhe dois atributos diferentes.

    // Menu interativo para o jogador escolher o primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao1);

    // Guarda os valores e o nome do primeiro atributo escolhido
    switch (opcao1) {

        case 1:
            nomeAtributo1 = "Populacao";
            valorAtributo1Carta1 = populacao1;
            valorAtributo1Carta2 = populacao2;
            break;

        case 2:
            nomeAtributo1 = "Area";
            valorAtributo1Carta1 = area1;
            valorAtributo1Carta2 = area2;
            break;

        case 3:
            nomeAtributo1 = "PIB";
            valorAtributo1Carta1 = pib1;
            valorAtributo1Carta2 = pib2;
            break;

        case 4:
            nomeAtributo1 = "Pontos Turisticos";
            valorAtributo1Carta1 = pontosTuristicos1;
            valorAtributo1Carta2 = pontosTuristicos2;
            break;

        case 5:
            nomeAtributo1 = "Densidade Populacional";
            valorAtributo1Carta1 = densidade1;
            valorAtributo1Carta2 = densidade2;
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    // Menu dinâmico para o segundo atributo
    // O atributo escolhido anteriormente não aparece novamente

    printf("\nEscolha o SEGUNDO atributo para comparar:\n");

    if (opcao1 != 1) {
        printf("1 - Populacao\n");
    }

    if (opcao1 != 2) {
        printf("2 - Area\n");
    }

    if (opcao1 != 3) {
        printf("3 - PIB\n");
    }

    if (opcao1 != 4) {
        printf("4 - Numero de pontos turisticos\n");
    }

    if (opcao1 != 5) {
        printf("5 - Densidade populacional\n");
    }

    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao2);

    // Verifica se o jogador escolheu o mesmo atributo duas vezes
    if (opcao1 == opcao2) {
        printf("\nVoce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Guarda os valores e o nome do segundo atributo escolhido
    switch (opcao2) {

        case 1:
            nomeAtributo2 = "Populacao";
            valorAtributo2Carta1 = populacao1;
            valorAtributo2Carta2 = populacao2;
            break;

        case 2:
            nomeAtributo2 = "Area";
            valorAtributo2Carta1 = area1;
            valorAtributo2Carta2 = area2;
            break;

        case 3:
            nomeAtributo2 = "PIB";
            valorAtributo2Carta1 = pib1;
            valorAtributo2Carta2 = pib2;
            break;

        case 4:
            nomeAtributo2 = "Pontos Turisticos";
            valorAtributo2Carta1 = pontosTuristicos1;
            valorAtributo2Carta2 = pontosTuristicos2;
            break;

        case 5:
            nomeAtributo2 = "Densidade Populacional";
            valorAtributo2Carta1 = densidade1;
            valorAtributo2Carta2 = densidade2;
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }

    // Soma dos atributos escolhidos
    somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;

    // Exibição dos Resultados

    printf("\nComparacao de cartas:\n");

    printf("\nCarta 1 - %s (%c)\n", nomeCidade1, estado1);
    printf("%s: %.2f\n", nomeAtributo1, valorAtributo1Carta1);
    printf("%s: %.2f\n", nomeAtributo2, valorAtributo2Carta1);

    printf("\nCarta 2 - %s (%c)\n", nomeCidade2, estado2);
    printf("%s: %.2f\n", nomeAtributo1, valorAtributo1Carta2);
    printf("%s: %.2f\n", nomeAtributo2, valorAtributo2Carta2);

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, somaCarta1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, somaCarta2);

    // Operador ternário para definir o vencedor final
    char *resultadoFinal =
        somaCarta1 > somaCarta2 ? "Resultado final: Carta 1 venceu!" :
        somaCarta2 > somaCarta1 ? "Resultado final: Carta 2 venceu!" :
        "Resultado final: Empate!";

    printf("\n%s\n", resultadoFinal);

    return 0;
}

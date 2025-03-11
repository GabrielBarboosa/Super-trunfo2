#include <stdio.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int densidadeDemografica;
} Carta;

int main() {
    // Cartas pré-cadastradas
    Carta carta1 = {"Brasil", 213993437, 8515767, 1847000, 25};
    Carta carta2 = {"Argentina", 45195774, 2780400, 445469, 16};

    int atributo1, atributo2;
    int somaCarta1 = 0, somaCarta2 = 0;

    // Exibir informações das cartas
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    scanf("%d", &atributo2);

    // Validar entradas
    if (atributo1 < 1 || atributo1 > 4 || atributo2 < 1 || atributo2 > 4 || atributo1 == atributo2) {
        printf("Erro: Escolha atributos válidos e diferentes!\n");
        return 1; // Encerra o programa com erro
    }

    // Comparar os atributos e calcular as somas
    switch (atributo1) {
        case 1:
            printf("\nComparando População:\n");
            somaCarta1 += carta1.populacao;
            somaCarta2 += carta2.populacao;
            break;
        case 2:
            printf("\nComparando Área:\n");
            somaCarta1 += carta1.area;
            somaCarta2 += carta2.area;
            break;
        case 3:
            printf("\nComparando PIB:\n");
            somaCarta1 += carta1.pib;
            somaCarta2 += carta2.pib;
            break;
        case 4:
            printf("\nComparando Densidade Demográfica:\n");
            somaCarta1 += carta1.densidadeDemografica;
            somaCarta2 += carta2.densidadeDemografica;
            break;
    }

    switch (atributo2) {
        case 1:
            printf("\nComparando População:\n");
            somaCarta1 += carta1.populacao;
            somaCarta2 += carta2.populacao;
            break;
        case 2:
            printf("\nComparando Área:\n");
            somaCarta1 += carta1.area;
            somaCarta2 += carta2.area;
            break;
        case 3:
            printf("\nComparando PIB:\n");
            somaCarta1 += carta1.pib;
            somaCarta2 += carta2.pib;
            break;
        case 4:
            printf("\nComparando Densidade Demográfica:\n");
            somaCarta1 += carta1.densidadeDemografica;
            somaCarta2 += carta2.densidadeDemografica;
            break;
    }

    // Exibir resultados
    printf("\nResultados:\n");
    printf("Carta 1 (%s): Soma dos atributos = %d\n", carta1.nome, somaCarta1);
    printf("Carta 2 (%s): Soma dos atributos = %d\n", carta2.nome, somaCarta2);

    // Determinar o vencedor ou empate
    if (somaCarta1 > somaCarta2) {
        printf("\nCarta 1 (%s) venceu!\n", carta1.nome);
    } else if (somaCarta2 > somaCarta1) {
        printf("\nCarta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
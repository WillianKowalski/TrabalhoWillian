#include <stdio.h>

int main() {

    /* ===== CARTA 1 ===== */
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 828000.0;
    int pontos1 = 15;

    /* ===== CARTA 2 ===== */
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.27;
    float pib2 = 364000.0;
    int pontos2 = 12;

    /* ===== CALCULOS ===== */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    /* ===== COMPARACAO ===== */
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

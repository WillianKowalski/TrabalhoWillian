#include <stdio.h>

int main() {

    /* ================= CONSTANTES ================= */   //valores das constantes de movimentos das peças e limite máximo de movimentos,
    //no caso do bispo como ele se movimenta em diagonal são 10 movimentos, sendo 5 para cada direção.
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    /* ================= TORRE =================
       Movimento: 5 casas para a direita
       Estrutura de repetição: FOR
    */
    printf("Movimentacao da TORRE:\n"); //imprime a peça que esta se movendo e em qual direção

    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n"); //direção que a peça se movimentou
    }

    /* ================= BISPO =================
       Movimento: 5 casas na diagonal superior direita
       Estrutura de repetição: WHILE
       Diagonal = Cima + Direita
    */
    printf("\nMovimentacao do BISPO:\n"); //imprime a peça que esta se movendo e em qual direção

    int contadorBispo = 0; 
    while (contadorBispo < MOV_BISPO) {
        printf("Cima\n");//direção que a peça se movimentou
        printf("Direita\n");//direção que a peça se movimentou
        contadorBispo++;
    }

    /* ================= RAINHA =================
       Movimento: 8 casas para a esquerda
       Estrutura de repetição: DO WHILE
    */
    printf("\nMovimentacao da RAINHA:\n"); //imprime a peça que esta se movendo e em qual direção

    int contadorRainha = 0;
    do {
        printf("Esquerda\n");//direção que a peça se movimentou
        contadorRainha++;
    } while (contadorRainha < MOV_RAINHA);

    return 0;
}




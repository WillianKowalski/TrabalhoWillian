#include <stdio.h>

int main() {

    // 1. Criando o tabuleiro

    int tabuleiro[10][10];

    // Descobrindo automaticamente o tamanho do tabuleiro
    int tamanhoTabuleiro = sizeof(tabuleiro) / sizeof(tabuleiro[0]);

    // Inicializando tudo com 0 (água)
    for(int linha = 0; linha < tamanhoTabuleiro; linha++) {
        for(int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // ==========================
    // 2. Criando os navios
    // ==========================
    int navioHorizontal[] = {3, 3, 3};
    int navioVertical[]   = {3, 3, 3};

    // Descobrindo automaticamente o tamanho do navio
    int tamanhoNavio = sizeof(navioHorizontal) / sizeof(navioHorizontal[0]);

    // Coordenadas iniciais
    int linhaH = 2, colunaH = 4;  // Navio horizontal
    int linhaV = 5, colunaV = 7;  // Navio vertical

    // ==========================
    // 3. Posicionando navio horizontal
    // ==========================

    for(int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // ==========================
    // 4. Posicionando navio vertical
    // ==========================

    for(int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    printf("\n   ");

// Imprime o tabuleiro
for(int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
    printf("%c ", 'A' + coluna);
}
printf("\n");

for(int linha = 0; linha < tamanhoTabuleiro; linha++) {

    // Imprime número da linha
    printf("%2d ", linha + 1);

    for(int coluna = 0; coluna < tamanhoTabuleiro; coluna++) {
        printf("%d ", tabuleiro[linha][coluna]);
    }

    printf("\n");
}


    return 0;
}


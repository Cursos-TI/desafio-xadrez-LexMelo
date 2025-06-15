#include <stdio.h>

int main() {
    // Define o número de casas que cada peça irá se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // --- Movimento da Torre ---

    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // --- Movimento do Bispo ---
   
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n"); 

    // --- Movimento da Rainha ---
   
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    if (casasRainha > 0) {
        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha < casasRainha);
    }

    return 0; 
}

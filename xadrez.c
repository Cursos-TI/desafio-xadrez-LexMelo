#include <stdio.h>

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int movimentoCavaloBaixo = 2;
    const int movimentoCavaloEsquerda = 1;
    //  Movimento da Torre  
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    //  Movimento do Bispo  
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n"); // Adiciona uma linha em branco para separar as seções


    //  Movimento da Rainha  
  
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    if (casasRainha > 0) {
        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha < casasRainha);
    }
    printf("\n");


    //  Movimento do Cavalo (usando loops aninhados: for e while) 
   
   
    printf("--- Movimento do Cavalo ---\n");

    
    for (int parteDoMovimento = 1; parteDoMovimento <= 2; parteDoMovimento++) {
        
        if (parteDoMovimento == 1) {
            int passosDados = 0;
           
            while (passosDados < movimentoCavaloBaixo) {
                printf("Baixo\n");
                passosDados++;
            }
        }
        
        else {
            int passosDados = 0;
            
            while (passosDados < movimentoCavaloEsquerda) {
                printf("Esquerda\n");
                passosDados++;
            }
        }
    }


    return 0; 
}

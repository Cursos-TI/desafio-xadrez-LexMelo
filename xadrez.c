#include <stdio.h>

/**
 * @file movimentos_xadrez.c
 * @brief Simula movimentos de peças de xadrez usando recursão e loops complexos.
 * 
 * O programa move a Torre, o Bispo, a Rainha e o Cavalo,
 * imprimindo cada passo no console conforme as regras do xadrez.
 */

// --- Constantes para os Movimentos ---
// Quantidade de casas que cada peça irá se mover.
const int CASAS_TORRE = 5;
const int CASAS_BISPO = 5;
const int CASAS_RAINHA = 8;
const int CAVALO_PASSOS_CIMA = 2;
const int CAVALO_PASSOS_DIREITA = 1;

// --- Protótipos das Funções ---

/**
 * @brief Move a Torre de forma recursiva para a direita.
 * 
 * Esta função imprime "Direita" para cada passo até
 * o número de passos restantes ser zero.
 * @param passosRestantes Número de casas restantes para mover.
 */
void moverTorreRecursivo(int passosRestantes);

/**
 * @brief Move o Bispo de forma recursiva na diagonal para cima e direita.
 * 
 * Imprime "Cima, Direita" para cada passo até o fim dos passos.
 * @param passosRestantes Número de casas restantes para mover na diagonal.
 */
void moverBispoRecursivo(int passosRestantes);

/**
 * @brief Move a Rainha de forma recursiva para a esquerda.
 * 
 * Imprime "Esquerda" para cada passo até o fim dos passos restantes.
 * @param passosRestantes Número de casas restantes para mover.
 */
void moverRainhaRecursivo(int passosRestantes);

/**
 * @brief Move o Cavalo usando loops aninhados para simular o movimento em "L".
 * 
 * O Cavalo se move 2 casas para cima e 1 casa para a direita,
 * usando um loop 'for' externo para passos totais e um 'while' interno
 * para controlar cada passo individualmente. O 'break' controla o fluxo
 * para que o loop interno execute apenas uma vez por passo.
 */
void moverCavaloComplexo();

// --- Função Principal ---

int main() {
    // Movimento da Torre
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(CASAS_TORRE);
    printf("\n");

    // Movimento do Bispo
    printf("--- Movimento do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(CASAS_BISPO);
    printf("\n");

    // Movimento da Rainha
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(CASAS_RAINHA);
    printf("\n");

    // Movimento do Cavalo
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    moverCavaloComplexo();
    printf("\n");

    return 0; // Programa finalizado com sucesso
}

// --- Implementação das Funções ---

void moverTorreRecursivo(int passosRestantes) {
    // Caso base: se não restam passos, termina recursão
    if (passosRestantes <= 0) {
        return;
    }
    // Imprime o movimento para a direita
    printf("Direita\n");
    // Chama a função para o próximo passo (recursão)
    moverTorreRecursivo(passosRestantes - 1);
}

void moverBispoRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    // Imprime movimento diagonal combinando "Cima" e "Direita"
    printf("Cima, Direita\n");
    moverBispoRecursivo(passosRestantes - 1);
}

void moverRainhaRecursivo(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    // Imprime movimento para a esquerda
    printf("Esquerda\n");
    moverRainhaRecursivo(passosRestantes - 1);
}

void moverCavaloComplexo() {
    int passosVerticaisDados = 0;
    int totalPassosL = CAVALO_PASSOS_CIMA + CAVALO_PASSOS_DIREITA; // Total = 3

    // Loop externo controla cada passo do movimento total em "L"
    for (int passoAtual = 1; passoAtual <= totalPassosL; passoAtual++) {
        // Loop interno adiciona complexidade e controla impressão dos passos
        while (1) {
            // Se ainda não completou a parte vertical (2 passos)
            if (passosVerticaisDados < CAVALO_PASSOS_CIMA) {
                printf("Cima\n");
                passosVerticaisDados++;
            } else {
                // Depois dos 2 passos para cima, faz o 1 para a direita
                printf("Direita\n");
            }
            // Sai do loop interno para ir para próximo passo no loop externo
            break;
        }
    }
}

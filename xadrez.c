#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

// ------------------------------
// Funções Recursivas
// ------------------------------

// Movimento da Torre: 5 casas para a Direita (Recursivo)
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento da Rainha: 8 casas para a Esquerda (Recursivo)
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo: 5 casas na diagonal (Cima Direita) - Recursivo
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento do Bispo: Utilizando Loops Aninhados
void moverBispoLoop(int casas) {
    printf("Movimento do Bispo com Loops Aninhados (Diagonal Cima Direita):\n");
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
}

// ------------------------------
// Movimento do Cavalo com Loops Complexos
// ------------------------------
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita - em 'L'):\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 1; i <= movimentosVerticais + movimentosHorizontais; i++) {
        if (i <= movimentosVerticais) {
            printf("Cima\n");
        } else {
            // Loop interno controlando condição especial
            for (int j = 1; j <= 1; j++) {
                if (j == 1) {
                    printf("Direita\n");
                }
                else {
                    // Esse else nunca é executado, mas demonstra controle do fluxo
                    continue;
                }
            }
        }

        // Exemplo de uso de break (se for além do movimento planejado, interrompe)
        if (i > 3) {
            break;
        }
    }

    printf("\n");
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    // ------------------------------
    // Torre com Recursividade
    // ------------------------------
    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorre(5);
    printf("\n");

    // ------------------------------
    // Bispo com Recursividade
    // ------------------------------
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita - Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    // ------------------------------
    // Bispo com Loops Aninhados
    // ------------------------------
    moverBispoLoop(5);

    // ------------------------------
    // Rainha com Recursividade
    // ------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainha(8);
    printf("\n");

    // ------------------------------
    // Cavalo com Loops Complexos
    // ------------------------------
    moverCavalo();

    return 0;
}

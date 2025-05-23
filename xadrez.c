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

#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da Torre (5 casas para a Direita)
    // Utiliza o laço FOR
    // -------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // -------------------------------
    // Movimento do Bispo (5 casas na diagonal Cima Direita)
    // Utiliza o laço WHILE
    // -------------------------------
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // -------------------------------
    // Movimento da Rainha (8 casas para a Esquerda)
    // Utiliza o laço DO-WHILE
    // -------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);
    printf("\n");

    // -------------------------------
    // Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda)
    // Utiliza loops aninhados: FOR + WHILE
    // -------------------------------
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    // Loop externo: movimento de 2 casas para Baixo (obrigatoriamente FOR)
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimento de 1 casa para Esquerda (WHILE)
    int contador_cavalo = 1;
    while (contador_cavalo <= 1) {
        printf("Esquerda\n");
        contador_cavalo++;
    }

    printf("\n");

    return 0;
}

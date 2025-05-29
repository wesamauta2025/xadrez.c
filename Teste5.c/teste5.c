#include <stdio.h>

// Função principal
int main() {
    // Definindo as constantes para o movimento do cavalo
    const int casas_baixo = 2; // Duas casas para baixo
    const int casas_esquerda = 1; // Uma casa para a esquerda

    // Imprimindo uma linha em branco para separar de outros movimentos
    printf("\n");

    // Loop externo (for) para controlar o movimento para baixo
    for (int i = 0; i < casas_baixo; i++) {
        // Imprime a direção do movimento atual
        printf("Baixo\n");
    }

    // Loop interno (while) para controlar o movimento para a esquerda
    int j = 0;
    while (j < casas_esquerda) {
        // Imprime a direção do movimento atual
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
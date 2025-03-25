#include <stdio.h>

int main() {
    int carta1;
    int carta2;
    int resultado;

    // Inicialização das variáveis
    carta1 = 10;
    carta2 = 20;

    // Comparação das cartas
    if (carta1 > carta2) {
        resultado = 1;
    } else if (carta1 < carta2) {
        resultado = -1;
    } else {
        resultado = 0;
    }

    // Exibição do resultado
    printf("Resultado da comparação: %d\n", resultado);

    return 0;
}
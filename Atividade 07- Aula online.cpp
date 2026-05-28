#include <stdio.h>

// Protótipo da função recursiva
int fatorial(int n);

int main() {
    int numero = 5;
    int resultado;
    
    printf("=== Calculo de Fatorial Fixo ===\n\n");
    

    resultado = fatorial(numero);
    

    printf("O fatorial de %d e igual a: %d\n", numero, resultado);
    
    return 0;
}


int fatorial(int n) {
    // Caso Base: se n for 0 ou 1, o fatorial é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Caso Recursivo: 5 * fatorial(4) -> 4 * fatorial(3) ...
    return n * fatorial(n - 1);
}
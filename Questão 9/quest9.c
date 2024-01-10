/*9 Escreva um programa para converter e imprimir os caracteres
para os valores ASCII de 0 a 127. O programa deve imprimir 10 caracteres
por linha*/

#include<stdio.h>

int main() {
    for (int i = 0; i < 128; ++i) {
        printf("%3d:%c  ", i, (char)i);
        
        // Imprime uma quebra de linha a cada 10 caracteres
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
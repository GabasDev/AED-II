#include <stdio.h>

int main()
{
    int soma = 0;
    for (int numero = 1; numero <= 100; numero++)
    {
        if (numero % 7 == 0)
        {
            soma += numero;
        }
    }
    // Imprime o resultado
    printf("A soma dos multiplos de 7 de 1 a 100 e: %d\n", soma);

    return 0;
}
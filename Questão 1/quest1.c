//Problema 1 Escreva um programa para somar uma sequência de inteiros e
//calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
//o número de valores a serem inseridos. Seu programa deve ler apenas um
//valor cada vez que scanf é executado. Uma sequência de entrada típica pode
//ser: 7 678 234 315 489 536 456 367

#include <stdio.h>

int main()
{
    int n, valor, soma;
    // Solicita o numero de valores
    printf("Digite o numero de valores a serem inseridos: ");
    scanf("%d", &n);
    // Lê e soma os valores
    for (int i = 0; i < n; ++i)
    {
        printf("Digite o proximo valor: ");
        scanf("%d", &valor);
        soma += valor;
    }
    // Calcula e exibe a média
    if (n > 0)
    {
        float media = (float)soma / n;
        printf("A soma dos valores eh: %d\n", soma);
        printf("A media dos valores eh: %.2f\n", media);
    }
    else
    {
        printf("Nao ha valores para calcular a media.\n");
    }
    return 0;
}
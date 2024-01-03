/*A função fatorial é freqüentemente usada em problemas de
probabilidade. O fatorial é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros de 1 a n. Imprima
os resultados em formato tabular.
*/
#include<stdio.h>

// Função para calcular o fatorial de um número
long long calcularFatorial(int numero)
{
    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    else
    {
        return numero * calcularFatorial(numero - 1);
    }
}

int main()
{
    int n;

    // Solicita ao usuario para inserir o valor de n
    printf("insira o valor de n: ");
    scanf("%d", &n);
    printf("numero\tFatorial\n");
    // Calcula e imprime os fatoriais de 1 a n
    for (int i = 1; i <= n; i++)
    {
        long long fatorial = calcularFatorial(i);
        printf("%d\t%lld\n", i, fatorial);
    }
    return 0;
}
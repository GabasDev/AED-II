/*Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. Escreva um programa que leia cinco números (cada
2
um entre 1 e 30). Para cada número lido, seu programa deve imprimir uma
linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu
programa lê o número sete, ele deve imprimir ∗ ∗ ∗ ∗ ∗ ∗ ∗.*/

#include <stdio.h>
void desenha_grafico(int numero)
{
    for (int i = 0; i < numero; i++)
    {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int numeros[5];

    // Lê cinco números do usuário
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o %do número (entre 1 e 30): ", i + 1);
            scanf("%d", &numeros[i]);

            if (numeros[i] < 1 || numeros[i] > 30)
            {
                printf("Número fora do intervalo. Tente novamente.\n");
            }

        } while (numeros[i] < 1 || numeros[i] > 30);
    }

    // Chama a função para desenhar os gráficos
    for (int i = 0; i < 5; i++)
    {
        desenha_grafico(numeros[i]);
    }

    return 0;
}
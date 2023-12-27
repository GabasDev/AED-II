//Problema 2 Escreva um programa que converta temperaturas de 30 oC a
//50 oC para a escala Fahrenheit espaçados de 1
//oC. O programa deve imprimir
//uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
//F = C + 32]

#include <stdio.h>

float convertor(float celsius)
{
    return celsius + 32;
}

int main()
{
    printf("Celsius\tFahrenheit\n");
    for (int celsius = 30; celsius <= 50; celsius++)
    {
        float fahrenheit = convertor(celsius);
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
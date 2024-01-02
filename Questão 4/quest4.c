#include <stdio.h>

int main()
{
    printf("Numeros primos de 1 a 100:\n");

    for (int i = 2; i <= 100; i++)
    {
        int primo = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
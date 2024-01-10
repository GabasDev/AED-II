/* Calcule o valor de π da série infinita:
π = 4 ∗1 −13+15−17+19−1/11
. . .
Apresente o resultado com os valores, lado a lado, da quantidade de temos
utilizado e da aproximação do valor de π.
*/

#include <stdio.h>

int main() {
    int num_termos;
    double pi_aproximacao = 0.0;

    printf("Digite a quantidade de termos para calcular pi: ");
    scanf("%d", &num_termos);

    for (int i = 1; i <= num_termos; ++i) {
        if (i % 2 == 1) {
            pi_aproximacao += 4.0 / (2 * i - 1);
        } else {
            pi_aproximacao -= 4.0 / (2 * i - 1);
        }

        // Imprime os resultados lado a lado
        printf("Termos: %4d  Aproximacao de pi: %.10f\n", i, pi_aproximacao);
    }

    return 0;
}
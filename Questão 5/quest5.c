//Escreva um programa que imprima a soma, a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer número inserido pelo usuário

int main()
{
    int numero;

    // inserir um numero
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Inicializa as variaveis para armazenar as somas
    int soma = 0;
    int soma_q = 0;
    int soma_c = 0;

    // Loop de 1 ate o numero inserido
    for (int i = 1; i <= numero; i++)
    {
        soma += i;
        soma_q += i * i;
        soma_c += i * i * i;
    }

    // Imprime os resultados
    printf("Soma dos numeros naturais de 1 a %d: %d\n", numero, soma);
    printf("Soma dos quadrados de 1 a %d: %d\n", numero, soma_q);
    printf("Soma dos cubos de 1 a %d: %d\n", numero, soma_c);

    return 0;
}
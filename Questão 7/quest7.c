/*Problema 8 Um varejista online vende cinco produtos diferentes, cujos
preços de varejo são mostrados na tabela a seguir:
Número do
produto
Preço no
varejo
1 3, 00
2 4, 00
3 2, 80
4 1, 95
5 5, 00
Escreva um programa que leia uma série de pares de números da seguinte
forma: Número do produto e Quantidade vendida por um dia. Seu programa
deve usar uma instrução switch para ajudar a determinar o preço de varejo
de cada produto. Seu programa deve calcular e exibir o valor total de varejo
de todos os produtos vendidos na semana passada.
*/

int main() {
    const double precos[] = {3.00, 4.00, 2.80, 1.95, 5.00};
    int numeroProduto, quantidade;
    double totalVenda = 0.0;

    printf("Informe o numero do produto e a quantidade vendida por dia  (digite -2 para encerrar):\n");

    while (1) {
        printf("Numero do produto (-2 para encerrar): ");
        scanf("%d", &numeroProduto);

        if (numeroProduto == -2) {
            break;
        }

        if (numeroProduto < 1 || numeroProduto > 5) {
            printf("Numero do produto invalido. Tente novamente.\n");
            continue;
        }

        printf("Quantidade vendida por dia: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Quantidade invalida. Tente novamente.\n");
            continue;
        }

        // Usando switch para calcular o valor total de varejo para cada produto
        switch (numeroProduto) {
            case 1:
                totalVenda += precos[0] * quantidade;
                break;
            case 2:
                totalVenda += precos[1] * quantidade;
                break;
            case 3:
                totalVenda += precos[2] * quantidade;
                break;
            case 4:
                totalVenda += precos[3] * quantidade;
                break;
            case 5:
                totalVenda += precos[4] * quantidade;
                break;
            default:
                printf("Numero do produto invalido. Tente novamente.\n");
                break;
        }
    }

    printf("O valor total de varejo de todos os produtos vendidos na semana passada e: R$ %.2f\n", totalVenda);

    return 0;
}

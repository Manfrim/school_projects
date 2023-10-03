#include <stdio.h>

int main() {
    int n;
    int termo1 = 0;
    int termo2 = 1;
    int proximo_termo;
    int soma = 0;

    printf("Digite a quantidade de termos da sequencia de Fibonacci a serem gerados: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", termo1);

        soma += termo1;

        proximo_termo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo_termo;
    }

    printf("\nSoma dos termos: %d\n", soma);

    return 0;

    system ("pause");
}

#include <stdio.h>

int isprime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("digite a quantidade de numeros: ");
    scanf("%d", &n);

    int soma = 0;
    for (int i = 0; i < n; i++) {
        int numero;
        printf("digite um numero: ");
        scanf("%d", &numero);

        if (isprime(numero)) {
            soma += numero;
        }
    }

    printf("a soma dos números primos é: %d\n", soma);

    return 0;
}

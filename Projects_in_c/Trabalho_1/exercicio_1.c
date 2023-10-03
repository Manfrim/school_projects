#include <stdio.h>

int main() {
    int quantidade = 0;
    float soma = 0;
    float valor;

    printf("Digite um valor (digite um valor negativo para sair): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor (digite um valor negativo para sair): ");
        scanf("%f", &valor);
    }

    float media = soma / quantidade;

    printf("O somatorio é: %.2f\n", soma);
    printf("A media é: %.2f\n", media);
    printf("A quantidade de valores lidos eh: %d\n", quantidade);

    return 0;

    system ("pause");
}

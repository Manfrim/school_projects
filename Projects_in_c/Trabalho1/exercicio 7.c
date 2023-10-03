#include <stdio.h>

int main() {
    float valores[10];
    float soma = 0.0;
    float menor_valor;
    float resultado_multiplicacao;

    // Inserir os valores
    printf("Digite 10 valores reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &valores[i]);

        // Atualizar a soma
        soma += valores[i];

        // Atualizar o menor valor
        if (i == 0 || valores[i] < menor_valor) {
            menor_valor = valores[i];
        }
    }

    // Calcular o resultado da multiplicação
    resultado_multiplicacao = soma * menor_valor;

    // Exibir os resultados
    printf("\nSoma calculada: %.2f\n", soma);
    printf("Menor valor digitado: %.2f\n", menor_valor);
    printf("Resultado da multiplicação: %.2f\n", resultado_multiplicacao);

    return 0;

    system ("pause");
}

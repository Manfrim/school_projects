#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroTermos, termo1, termo2, proximoTermo, soma = 0, contador;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &numeroTermos);

    printf("Digite o numero 1: ");
    scanf("%d", &termo1);

    printf("Digite o nuemro 2: ");
    scanf("%d", &termo2);

    printf("Série de Fibonacci com %d de numeros:\n", numeroTermos);

    for (contador = 1; contador <= numeroTermos; contador++) {
        printf("%d ", termo1);
        soma += termo1;

        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\nSoma de %d nuemros: %d\n", numeroTermos, soma);

    system("pause");

    return 0;
}

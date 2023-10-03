#include <stdio.h>
#include <stdlib.h>

int main() {

    char genero, sexo;
    int totalMulheres = 0, totalHomens = 0, totalPessoas = 0;

    do {
        printf("Digite o sexo da pessoa: ");
        scanf(" %c", &sexo);

        if (sexo == 'f' || sexo == 'F') {
            totalMulheres++;
            totalPessoas++;
        }

        if (sexo == 'm' || sexo == 'M') {
            totalHomens++;
            totalPessoas++;
        }

    } while (sexo == 'f' || sexo == 'F' || sexo == 'm' || sexo == 'M');

    printf("Quantidade de mulheres: %d\n", totalMulheres);
    printf("Quantidade de homens: %d\n", totalHomens);
    printf("Quantidade de pessoas registradas: %d\n", totalPessoas);
    printf("\n\n");
    system("pause");

    return 0;
}

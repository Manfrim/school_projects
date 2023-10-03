#include <stdio.h>

int main() {
    char sexo;
    int total_homens = 0;
    int total_mulheres = 0;
    int total_pessoas = 0;

    printf("Digite o sexo das pessoas (f - feminino, m - masculino).\n");
    printf("Digite qualquer outro valor para encerrar o cadastro.\n");

    while (1) {
        printf("Digite o sexo da pessoa: ");
        scanf(" %c", &sexo);

        if (sexo == 'f' || sexo == 'F') {
            total_mulheres++;
            total_pessoas++;
        }
        else if (sexo == 'm' || sexo == 'M') {
            total_homens++;
            total_pessoas++;
        }
        else {
            break;
        }
    }

    printf("\nTotal de homens cadastrados: %d\n", total_homens);
    printf("Total de mulheres cadastradas: %d\n", total_mulheres);
    printf("Total de pessoas cadastradas: %d\n", total_pessoas);

    return 0;

    system ("pause");
}

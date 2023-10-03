#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador = 0;
    float salario, mediasalarios, porcentagemsalariobaixo, mediafilhos, numfilhos;
    float salariototal, maiorsalario, salariobaixo, totalfilhos = 0;
    printf("Digite o salario do habitante (para encerrar, digite um valor negativo): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%f", &numfilhos);

        salariototal += salario;

        totalfilhos += numfilhos;

        if (salario > maiorsalario) {
            maiorsalario = salario;
        }

        if (salario <= 900.0) {
            salariobaixo++;
        }

        contador++;

        printf("\nDigite o salario do habitante (valor negativo para encerrar): ");
        scanf("%f", &salario);
    }
    mediasalarios = salariototal / contador;
    mediafilhos = totalfilhos / contador;
    porcentagemsalariobaixo =  salariobaixo / contador * 100;
    printf("\nMedia dos salarios da populacao: %.2f\n", mediasalarios);
    printf("Media do numero de filhos: %.2f\n", mediafilhos);
    printf("Maior salario: %.2f\n", maiorsalario);
    printf("Porcentagem de pessoas com salarios ate R$ 900,00: %.2f%\n", porcentagemsalariobaixo);

    return 0;
}

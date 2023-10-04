# include <stdio.h>
# include <stdlib.h>

int main (void){
    int codigo;
    float salario, salarionovo;

    printf("Digite de 1 a 5 o seu cargo");
    printf("\n 1 - Escrituario");
    printf("\n 2 - Secratario");
    printf("\n 3 - Caixa");
    printf("\n 4 - Gerente");
    printf("\n 5 - Diretor\n");
    scanf("%d", &codigo);
    printf("Digite seu salário: ");
    scanf("%f", &salario);

    switch (codigo){
        case 1:
            salarionovo = salario + (salario * 0.5);
            printf("O seu salario novo é de %2.f", salarionovo);
        break;
        case 2:
            salarionovo = salario + (salario * 0.35);
            printf("O seu salario novo é de %2.f", salarionovo);
        break;
        case 3:
            salarionovo = salario + (salario * 0.20);
            printf("O seu salario novo é de %2.f", salarionovo);
        break;
        case 4:
            salarionovo = salario + (salario * 0.1);
            printf("O seu salario novo é de %f", salarionovo);
        break;
        case 5:
            printf("O seu salario não teve reajuste e3 continua %f", salario);
        break;
        default:
            printf("Cargo incorreto");
        break;


    }
}

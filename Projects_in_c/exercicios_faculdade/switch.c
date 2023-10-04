# include <stdio.h>
# include <stdlib.h>

int main(void){
    int turno, cargo;
    float salario, salarionovo;

    printf("Digite o quaanto você ganha: ");
    scanf("%f", &salario);
    system("cls");
    printf("Digite de 1 a 3 para seu turno:");
    printf("\n 1 - Matutino");
    printf("\n 2 - Vespertino");
    printf("\n 3 - Noturno\n");
    scanf("%d", &turno);
    system("cls");
    printf("Digite 1 ou 2 para seu cargo");
    printf("\n 1 - Gerente");
    printf("\n 2 - Operario\n");
    scanf("%d", &cargo);

    switch (turno){
        case 1:
            if(cargo == 1){
                salarionovo = salario + (salario * 0.06);
                printf("O seu slario novo é de %2.f", salarionovo);
            }
            if(cargo == 2){
                salarionovo = salario + (salario * 0.05);
                printf("O seu slario novo é de %2.f", salarionovo);
            }
            else{
                printf("Cargo não conhecido");
            }
        break;
        case 2:
            if(cargo == 1){
                salarionovo = salario + (salario * 0.07);
                printf("O seu slario novo é de %f", salarionovo);
            }
            if(cargo == 2){
                salarionovo = salario + (salario * 0.06);
            }
            else{
                printf("Cargo não reconhecido");
            }
        break;
        case 3:
            if(cargo == 1){
                salarionovo = salario + (salario * 0.2);
                printf("O seu slario novo é de %f", salarionovo);
            }
            if(cargo == 2){
                salarionovo = salario + (salario * 0.1);
                printf("O seu slario novo é de %f", salarionovo);
            }
            else{
                printf("Cargo não conhecido");
            }
        default:
            printf("Turno irreconhecivel");
    }
    system("pause");
    return 0;


}

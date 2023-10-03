# include <stdio.h>
# include <stdlib.h>

int main(){
    float c1, c2, c3, c4, vt, vb, total;
    float porcent1, porcent2;
    int entrada;

    do{
    printf("Selecione um cadidatos: ");
    printf("\nCAnditado - 1");
    printf("\nCAnditado - 2");
    printf("\nCAnditado - 3");
    printf("\nCAnditado - 4");
    printf("\nVoto nulo - 5");
    printf("\nVoto em branco - 6\n");
    scanf("%d", &entrada);
    switch(entrada){
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            vt++;
            break;
        case 6:
            vb++;
            break;
        case 0:
            continue;
            break;
        default:
            printf("\nVoto invalido");
            continue;
            }
    total = c1 + c2 + c3 + c4 + vt + vb;
    porcent1 = ((c1 + c2 + c3 + c4) * 100) / total;
    porcent2 = (vt * 100) / total;

    //system("cls");
    printf("%d", c2);


    }while (entrada != 0);

    printf("\nO candidato 1 teve %2.f de votos", c1);
    printf("\nO candidato 2 teve %2.f de votos", c2);
    printf("\nO candidato 3 teve %2.f de votos", c3);
    printf("\nO candidato 4 teve %2.f de votos", c4);
    printf("\nO total de votos nulos foi de %2.f", vt);
    printf("\n%2.f por cento votaram nulo", porcent1);
    printf("\n%2.f por cento votaram em branco", porcent2);
    printf("\nO total de votos foi de %2.f", total);


}

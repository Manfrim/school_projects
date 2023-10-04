# include <stdio.h>
# include <stdlib.h>

int main(){
    float matriz[3][5];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o numero para a posição de [%d, %d] na matriz", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    i = 0;
    j = 0;
    system("cls");
    for(i = 0; i<3; i++){
        for(j = 0; j < 5; j++){
            printf("A posiçao [%d, %d] contem o numero: %2.f\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}

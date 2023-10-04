#include <stdio.h>
# include <stdlib.h>

int main(){
    float matriz1[3][3], matriz2[3][3], matrizsoma[3][3];
    int n, m;
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            printf("Digite um numero para a posição %d e %d da matriz ", n+1, m+1);
            scanf("%f", &matriz1[n][m]);
        }
    }
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            printf("Digite um numero para a posição %d e %d da matriz ", n+1, m+1);
            scanf("%f", &matriz2[n][m]);
        }
}
system("cls");
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            matrizsoma[n][m] = matriz1[n][m] + matriz2[n][m];
            printf("\n A soma da matriz1 + a matriz2 na posição de %d e %d é de %2.f", n+1, m+1, matrizsoma[n][m]);
        }
    }
}

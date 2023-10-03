# include <stdlib.h>
# include <stdio.h>

int main(){
    int matriz[4][4], n, m, x;
    for(n = 0; n < 4; n++){
        for(m = 0; m < 4; m++){
            printf("Digite um numero para a posicao %d na coluna %d ", m+1, n+1);
            scanf("%d", &matriz[n][m]);
        }
    }
    printf("A matriz transposta e");
    printf("\n");
    for(n = 3; n > -1; n--){
        printf(" %d ", matriz[3][n]);
    }
    printf("\n");
    for(n = 3; n > -1; n--){
        printf(" %d ", matriz[1][n]);
    }
    printf("\n");
    for(n = 3; n > -1; n--){
        printf(" %d ", matriz[2][n]);
    }
    printf("\n");
    for(n = 3; n > -1; n--){
        printf(" %d ", matriz[0][n]);
    }


    return 0;
}

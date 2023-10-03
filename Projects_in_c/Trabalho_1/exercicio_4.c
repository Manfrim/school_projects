# include <stdlib.h>
# include <stdio.h>

int main(){
    int matriz[10], n;
    srand((unsigned)time(NULL));
    for(n = 0; n < 10; n++){
        matriz[n] = rand() % (1 - 100);
        if(matriz[n] % 2 == 0){
            n--;
        }
        else{
            continue;
        }
    }
    for(n = 0 ; n < 10; n++){
        printf("\nO numero da poiscao %d e %d", n+1, matriz[n]);
    }
    return 0;

}

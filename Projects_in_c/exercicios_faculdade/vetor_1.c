# include <stdio.h>
# include <stdlib.h>

int main(){
    float vetor[10];
    float maior;
    int n, x;
    for(n = 0; n < 10; n++){
        x = n - 1;
        printf("Digite um numero ");
        scanf("%f", &vetor[n]);
        if(vetor[n] > vetor[x]){
            maior = vetor[n];
        }
        else{
            continue;
        }
    }

    printf("O maior numero é %2.f", maior);
    return 0;
}

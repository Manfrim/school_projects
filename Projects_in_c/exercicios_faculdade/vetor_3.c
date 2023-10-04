# include <stdio.h>
# include <stdlib.h>


int main(){
    float numero[5], soma;
    int n;
    soma = 0;
    for(n = 0; n < 5; n++){
        printf("Digite um numero: ");
        scanf("%f", &numero[n]);
        soma = soma + numero[n];
    }
    printf("A soma deles sao %2.f", soma);
    for(n = 0; n < 5; n++){
        printf("\nna linha %d voce digitou %2.f ", n +1, numero[n]);
    }

    return 0;
}

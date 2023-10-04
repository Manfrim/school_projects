# include <stdlib.h>
# include <stdio.h>

int main(void){
    int numero, par, n, resto;
    par = 0;
    for(n = 1;n <= 20; n++){
        printf("Digite um numero: ", numero);
        scanf("%d", &numero);
        resto = numero % 2;
        if(resto == 0){
            par = par + 1;
        }
    }
    printf("%d dos numeros são pares", par);
}


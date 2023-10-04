# include <stdlib.h>
# include <stdio.h>

int main(void){
    int soma, entrada, n;

    for(n = 1; n <= 10; n++){
        printf("Digite um numero \n");
        scanf("%d", &entrada);
        soma = soma + entrada;
    }
    printf("A soma dles são %d\n", soma);
}

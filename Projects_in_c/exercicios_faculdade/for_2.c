# include <stdlib.h>
# include <stdio.h>

int main(void){
    int idade, maior, n;
    maior = 0;
    for(n = 1; n <= 20; n++){
        printf("Digite a sua Idade: ");
        scanf("%d", &idade);
        if(idade > 18){
            maior = maior + 1;
        }


    }
    printf("%d pessoas são maiores de idade", maior);
}

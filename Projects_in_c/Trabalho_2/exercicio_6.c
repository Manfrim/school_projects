# include <stdio.h>
# include <stdio.h>

int main(){
    int n, soma;
    int i = 2;

    printf("\nDigite um numero e somaremos todos os primos entre ele: ");
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    while(n > 0){
        if(n % i == 0){}
        else{
            soma = soma + n;
        }
        if(n != 2){}
        else{
        soma = soma + n;
        }
        if(n != 1){}
        else{
            soma = soma - n;
        }
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &n);


    }
    printf("\nA soma é de %d", soma);


    return 0;
}

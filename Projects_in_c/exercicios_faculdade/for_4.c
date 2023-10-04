# include <stdio.h>
# include <stdlib.h>


int main(void){
    int soma, N;
    soma = 0;
    for(N = 1; N <= 10; N++){
        soma = soma + N;
        printf("%d\n", soma);
    }
    printf("Soma igual a %d\n", soma);
    system("pause");
return 0;
}

# include <stdio.h>
# include <stdlib.h>

int main(){
    float impar, par, resto;
    int n, p;
    p = 25;

    while(n <= 25){
        n = n + 1;
        resto = n % 2;
        if(resto == 0){
            printf("%d,", n);
        }
    }
    printf("\n");

    while(p < 50){
        p = p + 1;
        resto = p % 2;
        if(resto != 0){
            printf("%d,", p);
        }
    }



    }




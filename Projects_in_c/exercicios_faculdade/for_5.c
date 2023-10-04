# include <stdio.h>
# include <stdlib.h>

int main(void){
    int numero, entrada;
    printf("Digite um numero: ");
    scanf("%d", &entrada);
    for(numero = 1; numero <= entrada; numero++){
        printf("%d\n", numero);
    }
    system("pause");
return 0;


}

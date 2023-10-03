# include <stdio.h>
# include <stdlib.h>

int main(){
    float entrada, soma, contagem, n, media;
    n = 0;
    soma = 0;
    while(entrada > 0){
        printf("Digite um numero:");
        scanf("%f", &entrada);
        n = n + 1;
        soma = soma + entrada;
        media = soma / n;
        }
    printf("\nA soma foi %2.f, voce digitou %2.f e a media foi de %f", soma, n, media);

}

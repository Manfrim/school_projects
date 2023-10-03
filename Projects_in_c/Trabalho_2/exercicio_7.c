# include <stdio.h>
# include <stdlib.h>

int main(void){
    float entrada, menor, soma, multiplicacao, m;
    int n;
    for(n = 0; n < 10; n++){
    printf("Digite um numero: ");
    scanf("%f", &entrada);
    soma = soma + entrada;
    if(entrada < m){
        menor = entrada;
        }
    m = entrada;
    multiplicacao = soma * menor;
    }
    printf("\nA soma de todos os numeros sao %1.f", soma);
    printf("\nO menor valor entre eles é %2.f", menor);
    printf("\nA multiplicação da soma com o menor valor é de %2.f", multiplicacao);

}

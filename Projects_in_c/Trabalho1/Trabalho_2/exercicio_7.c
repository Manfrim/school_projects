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
    printf("\nO menor valor entre eles � %2.f", menor);
    printf("\nA multiplica��o da soma com o menor valor � de %2.f", multiplicacao);

}

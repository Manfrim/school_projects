# include <stdlib.h>
# include <stdio.h>

int main(){
    int estado, carga;
    float toneladas, total, imposto, toneladas2;
    printf("Digite o codigo do estado: ");
    scanf("%d", &estado);
    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &toneladas);
    printf("Ditige o codigo da carga: ");
    scanf("%d", &carga);
    toneladas2 = toneladas * 1000;

    if(carga >= 10 && carga <= 20){
        total = toneladas;
    }
    if(carga >= 21 && carga <= 30){
        total = toneladas * 2.5;
    }
    if(carga >= 31 && carga <= 40){
        total = toneladas * 3.4;
    }
    switch(estado){
        case 1:
            imposto = total * 0.35;
            break;
        case 2:
            imposto = total * 0.25;
            break;
        case 3:
            imposto = total * 0.15;
            break;
        case 4:
            imposto = total * 0.05;
            break;
        case 5:
            imposto = total;
            break;
        default:
            printf("Codigo de estado incorreto");
    }

    printf("\nVoce pagara %2.f  reais de imposto", imposto * 1000);
    printf("\nO preço total da carga do caminhao sera de %f", imposto + total);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    float alturaParede, larguraParede, larguraAzulejo, comprimentoAzulejo, areaAzulejo, areaParede, quantidade;

    printf("\nQual a altura da parede?: ");
    scanf("%f", &alturaParede);

    printf("\nQual a largura da parede?: ");
    scanf("%f", &larguraParede);

    printf("\nQual a largura do azulejo?: ");
    scanf("%f", &larguraAzulejo);

    printf("\nQual o comprimento do azulejo?: ");
    scanf("%f", &comprimentoAzulejo);

    areaParede = alturaParede * larguraParede;
    areaAzulejo = larguraAzulejo * comprimentoAzulejo;
    quantidade = areaParede / areaAzulejo;

    printf("\nA quantidade de azulejos a serem utilizados é de: %.2f", quantidade);

    printf("\n\n");

    system("Pause");
    return 0;
}

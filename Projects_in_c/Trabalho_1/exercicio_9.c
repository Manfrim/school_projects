#include <stdio.h>

int main() {
    int altura_parede, largura_parede;
    int altura_azulejo, largura_azulejo;
    int quantidade_azulejos;

    printf("Digite a altura da parede em centimetros: ");
    scanf("%d", &altura_parede);

    printf("Digite a largura da parede em centimetros: ");
    scanf("%d", &largura_parede);

    printf("Digite a altura do azulejo em centimetros: ");
    scanf("%d", &altura_azulejo);

    printf("Digite a largura do azulejo em centimetros: ");
    scanf("%d", &largura_azulejo);

    quantidade_azulejos = (altura_parede * largura_parede) / (altura_azulejo * largura_azulejo);

    printf("A quantidade de azulejos necessarios é: %d\n", quantidade_azulejos);

    return 0;

    system ("pause");
}

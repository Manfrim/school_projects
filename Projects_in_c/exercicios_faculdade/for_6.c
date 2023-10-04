# include <stdio.h>
# include <stdlib.h>

int main(void){
    char nome[30];
    float nota1, nota2, media;
    int n;

    for(n = 1; n <= 5; n++){
        system("cls");
        printf("Digite seu nome: ");
        scanf("%s", &nome);
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;
        if(media >= 7){
            printf("Parabens voce passou com %f\n", media);
        }
        else{
            printf("Voce nao passo e ficou com %f\n", media);
        }
    system("pause");
    }

return 0;

}

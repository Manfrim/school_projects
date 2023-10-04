# include <stdio.h>
# include <stdlib.h>

struct ficha_aluno{
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
    float notamedia;
    int matricula;
    float media;
};
typedef struct ficha_aluno ficha;
int main(){
    int x, y;
    ficha aluno[5];
    char nota_maior[20];
    float nota_maior2, soma, media2, media_maior, media_menor;

    nota_maior2 = 0;

    for(x = 0; x < 5; x++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &aluno[x].nome);
        printf("Digite a matricula: ");
        scanf("%d", &aluno[x].matricula);
        printf("Digite o a primeira nota: ");
        scanf("%f", &aluno[x].nota1);
        printf("Digite o a segunda nota: ");
        scanf("%f", &aluno[x].nota2);
        printf("Digite o a terceira nota: ");
        scanf("%f", &aluno[x].nota3);
        if(aluno[x].nota1 > nota_maior2){
            nota_maior = aluno[x].nome;
            y = x;
        };
        soma = aluno[x].nota1 + aluno[x].nota2 + aluno[x].nota3;
        aluno[x].media = soma/3;
        if(aluno[x].media > media2){
            media_maior = aluno[x].media;
        };
        if(aluno[x].media < media2){
            media_menor = aluno[x].media;
        }
        aluno[x].media = media2;
    };


};

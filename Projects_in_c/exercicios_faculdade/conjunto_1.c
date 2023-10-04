# include <stdlib.h>
# include <stdio.h>

struct ficha_aluno{
    char nome[20];
    int matricula;
    char curso[20];

};
typedef struct ficha_aluno matricula;

int main(){
    matricula aluno[5];
    int x;
    for(x = 0; x < 5; x++){
        printf("Digite seu nome: ");
        scanf("%s", &aluno[x].nome);
        printf("Digite o numero da sua matricula: ");
        scanf("%d", &aluno[x].matricula);
        printf("Digite o nome do curso: ");
        scanf("%s", &aluno[x].curso);
    };
    system("cls");
    for(x = 0; x < 5; x++){
        printf("O seu nome é %s, sua matricula é %d, e você cursa %s", aluno[x].nome, aluno[x].matricula, aluno[x].curso);
    };

};

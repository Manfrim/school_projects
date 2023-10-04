# include <stdio.h>
# include <stdlib.h>

struct Estruct01{
    char nome[20];
    char nascimento[20];
    char endereco[30];
    float cpf;
    int telefone;
};
typedef struct Estruct01 ficha;
int main(){
    ficha cliente;
    int x;
    x = 0;
    while(x == 0){
        printf("Digite seu nome: ");
        scanf("%s", &cliente.nome);
        printf("Digite a data do seu nascimento: ");
        scanf("%s", &cliente.nascimento);
        printf("Digite o seu endereco: ");
        scanf("%s", &cliente.endereco);
        printf("Digite o seu CPF: ");
        scanf("%d", &cliente.cpf);
        printf("Digite o seu telefone: ");
        scanf("%s", &cliente.telefone);
        system("cls");
        printf("\nSeu nome e %s", cliente.nome);
        printf("\nSua data de nascimento e %s", cliente.nascimento);
        printf("\nSeu endereco e %s", cliente.endereco);
        printf("\nSeu CPF e %1.d", cliente.cpf);
        printf("\nSeu telefone e %1.d", cliente.telefone);
        printf("\nSe quiser cadastrar novamente digite 0 se quiser continuar digite 1: ");
        scanf("%d", &x);
    }

}

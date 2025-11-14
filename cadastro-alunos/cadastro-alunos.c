#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[50];
    int matricula;


    printf("Digite o seu primeiro nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Matrícula do aluno: %d\n", matricula);

    return 0;

}
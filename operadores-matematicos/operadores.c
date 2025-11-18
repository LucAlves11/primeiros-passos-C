#include <stdio.h>

int main (){
    
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Entre com o numero1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero2: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    
    subtracao = numero1 - numero2;
    
    multiplicacao = numero1 * numero2;
    
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multipicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);
}
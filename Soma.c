#include <stdio.h>

int main(){

    int num1, num2, res; 

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    res = num1 + num2;

    printf("resultado: %d\n", res);

    return 0;
}
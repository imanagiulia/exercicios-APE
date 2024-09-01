#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float num[1];

    printf("Digite o número 1: ");
    scanf(" %f", &num[0]);

    printf("Digite o número 2: ");
    scanf("%f", &num[1]);

    while (num[1] == 0){
        printf("VALOR INVÁLIDO \n");
        printf("Digite um número: ");
        scanf("%f", &num[1]);
    }

    float div = num[0]/num[1];

    printf("A divisão do número 1 pelo número 2 é igual a %.2f", div);
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float num[1];

    printf("Digite o número 1: ");
    scanf("%f", &num[0]);

    do {
        printf("Digite o número 2: ");
        scanf("%f", &num[1]);
        if ( num[1] == 0){
            printf("VALOR INVÁLIDO! \n");
        }
    }while (num[1] == 0);
    
    float div = num[0]/num[1];

    printf("O resultado da divisão entre os números %.1f e %.1f é %2.f", num[0], num[1], div);

}
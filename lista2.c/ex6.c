#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num[2], maior = 0, aux = 0;

    for (int i = 0; i<2; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &num[i]);
        if (num[i] > aux){
            maior = num[i];
            aux = maior;
        }
    }
    
    if (num[0] == num[1]){
        printf("Os números são iguais! Por favor, digite números diferentes para saber qual o maior entre eles.");
    }else {
        printf("O maior número digitado foi %d", maior);
    }
}
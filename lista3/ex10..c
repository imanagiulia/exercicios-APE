#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "PT-BR");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        printf("%d \n", i+1);
    }
}
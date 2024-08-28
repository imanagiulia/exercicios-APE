#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número para saber se ele é POSITIVO ou NEGATIVO: ");
    scanf("%d", &num);

    if (num >= 0){
        printf("%d é um número POSITIVO", num);
    }else {
        printf("%d é um número NEGATIVO", num);
    }
}
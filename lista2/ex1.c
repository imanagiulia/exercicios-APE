#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num > 10){
        printf("É MAIOR QUE 10!");
    }else {
        printf("NÃO É MAIOR QUE 10!");
    }
}
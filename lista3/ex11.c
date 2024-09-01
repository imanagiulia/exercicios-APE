#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int num;
    do {
        printf("Digite um número: ");
        scanf("%d", &num);
    }while (num <= 0);

    for (int i = 0; i < num; i++){
        printf("%d \n", i+1);
    }
}

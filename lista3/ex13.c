#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int n;
    do{
        printf("Digite um número: ");
        scanf("%d", &n);
    }while (n < 1 || n > 10);

    for (int i = 1; i <= 10; i++){
        int result = i*n;
        printf("%d x %d = %d \n", n, i, result);
    }
}
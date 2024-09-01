#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        printf("*");
       for (int j = i-1; j > 0; j--){
            printf("*");
       }
       puts("");
    }
}
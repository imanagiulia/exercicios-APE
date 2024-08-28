#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int qtdAtual, qtdMax, qtdMin;

    printf("Qual a quantidade atual do produto: ");
    scanf("%d", &qtdAtual);

    printf("Qual a quantidade máxima do produto: ");
    scanf("%d", &qtdMax);

    printf("Qual a quantidade mínima do produto: ");
    scanf("%d", &qtdMin);

    float qtdMedia =  (qtdMax + qtdMin)/2;

    if (qtdAtual >= qtdMedia){
        printf("Não efetuar compra!");
    }else {
        printf("Efetuar compra!");
    }
}
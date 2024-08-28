#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float preco, total;
    int qtdMaca;

    printf("Digite quantas maçãs serão compradas: ");
    scanf("%d", &qtdMaca);

    if (qtdMaca < 12){
        preco = 1.30;
        total = qtdMaca * preco;
        printf("O custo total da compra foi de R$%.2f", total);
    }else {
        preco = 1;
        total = qtdMaca * preco;
        printf("O custo total da compra foi de R$%.2f", total);
    }
}
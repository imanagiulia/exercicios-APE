#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int qtdMercadoria;
    float valorMerdadoria[qtdMercadoria];
    float soma = 0, total;


    printf("Digite o número total de mercadorias no estoque: ");
    scanf("%d", &qtdMercadoria);

    for ( int i = 0; i < qtdMercadoria; i++){
        printf("Digite o valor da mercadoria %d: ", i+1);
        scanf("%f", &valorMerdadoria[i]);

        soma += valorMerdadoria[i];
        total = qtdMercadoria*valorMerdadoria[i];
    }

    float media = soma/qtdMercadoria;

    printf("O valor total em estoque é de R$%.2f \n", total);
    printf("A média do valor das mercadoria é R$%.2f", media);
}
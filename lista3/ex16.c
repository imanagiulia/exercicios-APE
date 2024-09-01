#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int qtdMercadoria;
    float valorMerdadoria[qtdMercadoria];

    printf("Digite o número total de mercadorias no estoque: ");
    scanf("%d", &qtdMercadoria);

    for ( int i = 0; i < qtdMercadoria; i++){
        printf("Digite o valor da mercadoria %d: ", i+1);
        scanf("%f", &valorMerdadoria[i]);
    }
}
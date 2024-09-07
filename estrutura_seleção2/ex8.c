#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int codigoProduto, codigoPais;
    float pesoKg, pesoG, preco, precoTotal;

    do{
        printf("Digite o código do produto: ");
        scanf("%d", &codigoProduto);
        if (codigoProduto < 1 || codigoProduto > 10){
            printf("[ERRO] Código inválido! \n");
        }
    } while (codigoProduto < 1 || codigoProduto > 10);
    
    printf("Qual o peso do produto, em Kg? ");
    scanf("%f", &pesoKg);

    do
    {
        printf("Qual o código do país de origem do produto? ");
        scanf("%d", &codigoPais);
        if (codigoPais < 1 || codigoPais > 3){
            printf("[ERRO] Código inválido! \n");
        }
    } while (codigoPais < 1 || codigoPais > 3);
    
    pesoG = pesoKg * 1000; 

    if (codigoProduto >= 1 && codigoProduto <=4){
        preco = pesoG * 10;
    }else if (codigoProduto >= 5 && codigoProduto <= 7){
        preco = pesoG * 25;
    }else {
        preco = pesoG * 35;
    }

    if ( codigoPais == 1){
        precoTotal = preco;
    }else if ( codigoPais == 2){
        precoTotal = preco + (preco * (15.0/100.0));
    }else {
        precoTotal = preco + (preco *(25.0/100.0));
    }

    printf("O preço total do produto é R$%.2f", precoTotal);
}
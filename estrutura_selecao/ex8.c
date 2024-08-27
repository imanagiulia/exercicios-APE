#include <stdio.h>

int main(){
    float precoAtual, vendaMedia;
    float precoNovo = 0;
    
    printf("Qual o preço atual do produto? \n");
    scanf("%f", &precoAtual);
    
    printf("Qual a venda média mensal do produto? \n");
    scanf("%f", &vendaMedia);
    
    if (vendaMedia < 500 || precoAtual < 30){
        precoNovo = ((precoAtual*10)/100)+ precoAtual;
        printf("O novo preço do produto é: %.2f", precoNovo);
    }else if (vendaMedia  >= 500 && vendaMedia < 1200 || precoAtual >=30 && precoAtual < 80){
        precoNovo = ((precoAtual*15)/100)+ precoAtual;
        printf("O novo preço do produto é: %.2f", precoNovo);
    }else if (vendaMedia >= 1200 || precoAtual >=80){
        precoNovo = precoAtual - ((precoAtual*20)/100);
        printf("O novo preço do produto é: %.2f", precoNovo);
    }

    return 0;
}


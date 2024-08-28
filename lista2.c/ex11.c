#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float salFixo, vendas;

    printf("Digite o valor do seu salário fixo: ");
    scanf("%f", &salFixo);

    printf("Digite o valor total das vendas que você efetuou neste mês: ");
    scanf("%f", &vendas);

    float salTotal;

    if (vendas <= 1500){
        salTotal = salFixo + (vendas * 3/100);
        printf("Seu salário total foi de R$%.2f", salTotal);
    }else {
        int diferenca = vendas - 1500;

        salTotal = salFixo +  (1500 * 3/100) + + (diferenca * 5/100);
        printf("Seu salário total foi de R$%.2f", salTotal);
    }
}
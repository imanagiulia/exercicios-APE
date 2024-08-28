#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numConta;
    float saldo;
    float debito, credito;

    printf("Digite o número da sua conta: ");
    scanf("%d", &numConta);

    printf("Digite o saldo atual da sua conta: ");
    scanf("%f", &saldo);

    printf("Digite o valor em débito da sua conta: ");
    scanf("%f", &debito);

    printf("Digite o valor em crédito da sua conta: ");
    scanf("%f", &credito);

    float saldoAtual = saldo - debito + credito;

    if (saldoAtual > 0){
        printf("Saldo positivo!");
    }else {
        printf("Saldo negativo!");
    }
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int codEstado, codCarga;
    float pesoToneladas, pesoKg, precoTotal, preco;

    do {
        printf("Digite o código de estado de origem da carga: ");
        scanf("%d", &codEstado);
        if (codEstado < 1 || codEstado > 5){
            printf("[ERRO] Código inválido! \n");
        }
    }while (codEstado < 1 || codEstado > 5);

    printf("Qual o peso da carga do caminhão, em toneladas? ");
    scanf("%f", &pesoToneladas);

    pesoKg = pesoToneladas * 1000; 

    do  {
        printf("Qual o código da carga? ");
        scanf("%d", &codCarga);
        if (codCarga < 10 || codCarga > 40){
            printf("[ERRO] código inválido! \n");
        }
    }while (codCarga < 10 || codCarga > 40);

    if (codCarga >= 10 && codCarga <=20){
        preco = pesoKg * 100;
    }else if ( codCarga >=21 && codCarga <=30){
        preco = pesoKg * 250;
    }else {
        preco = pesoKg * 340;
    }

    if (codEstado == 1){
        precoTotal = preco + ( preco * (35.0/100.0));
    }else if ( codEstado == 2){
        precoTotal = preco + ( preco * (25.0/100.0));
    }else if ( codEstado == 3){
        precoTotal = preco + (preco * (15.0/100.0));
    }else if ( codEstado == 4){
        precoTotal = preco + (preco * (5.0/100.0));
    }else {
        precoTotal = preco;
    }


    printf("O peso da carga do caminhão, em Kg, é %.1f\n", pesoKg);
    printf("O preço da carga do caminhão é R$%.2f\n", preco);
    printf("O valor do imposto do produto é R$%.2f\n", precoTotal - preco);
    printf("O valor total do produto é R$%.2f", precoTotal);
}
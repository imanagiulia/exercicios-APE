#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int codigo;
    float salarioAtual, salarioFinal;

    printf("Qual o salário atual do funcionário? ");
    scanf("%f", &salarioAtual);

    printf("Qual o cargo do funcionario? \n");
    printf("[1] ESCRITURÁRIO \n");
    printf("[2] SECRETÁRIO \n");
    printf("[3] CAIXA \n");
    printf("[4] GERENTE \n");
    printf("[5] DIRETOR \n");
    scanf("%d", &codigo);

    switch (codigo){
    case 1:
        salarioFinal = salarioAtual + (salarioAtual * (50.0/100.0));
        printf("O novo salário do funcionário é R$%.2f. ", salarioFinal);
        break;
    case 2:
        salarioFinal = salarioAtual + (salarioAtual * (35.0/100.0));
        printf("O novo salário do funcionário é R$%.2f. ", salarioFinal);
        break;
    case 3:
        salarioFinal = salarioAtual + (salarioAtual * (20.0/100.));
        printf("O novo salário do funcionário é R$%.2f. ", salarioFinal);
        break;
    case 4:
        salarioFinal = salarioAtual + (salarioAtual * (10.0/100.0));
        printf("O novo salário do funcionário é R$%.2f. ", salarioFinal);
        break;
    case 5:
        printf("O funcionário não terá aumento, seu salário continua sendo R$%.2f", salarioAtual);
        break;
    default:
        printf("[ERRO] opção inválida!");
        break;
    }

}
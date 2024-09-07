#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float n, raizQ, raizC, quadrado, cubo;
    int opcao;

    printf("Digite um número: ");
    scanf("%f", &n);

    printf("----------MENU DE OPÇÕES----------\n");
    printf("----------------------------------\n");
    printf("[1] O número digitado ao quadrado\n;");
    printf("[2] O número digitado ao cubo\n;");
    printf("[3] A raíz quadrada do número digitado\n;");
    printf("[4] A raíz cubica do número digitado\n;");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            quadrado = n * n;
            printf("O quadrado de %.1f é %.1f", n, quadrado);
            break;
        case 2:
            cubo = n * n * n;
            printf("O cubo de %.1f é %.1f", n, cubo);
            break;
        case 3:
            raizQ = sqrt(n); // função que calcula a raiz quadrada de um número.
            printf("A raíz quadrada de %.1f é %.1f", n, raizQ);
            break;
        case 4: 
            raizC = cbrt(n); // função que calcula a raiz cubica de um número.
            printf("A raíz cubica de %.1f é %.1f", n, raizC);
            break;

        default:
            printf("[ERRO] Opção inválida!");
            break;

    }
}


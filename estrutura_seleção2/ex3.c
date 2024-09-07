#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int opcao;
    float soma=0, subtração, div, mult, elevacao, raiz, resto;

    printf("-----calculadora----\n");
    puts("");
    printf("Qual operação você deseja realizar: \n");
    printf("[1] soma\n");
    printf("[2] subtração\n");
    printf("[3] divisão\n");
    printf("[4] multiplicação\n");
    printf("[5] elevação \n");
    printf("[6] raiz \n");
    printf("[7] resto \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        int n;
        printf("Quantos números serão somados? \n");
        scanf("%d", &n);

        float num[n];
        for (int i=0; i<=n; i++){
            printf("Digite o valor %d", i+1);
            scanf("%f", num[i]);
            soma += num[i];
        }

        printf("A soma dos números é %.1f.", soma);
        break;
    
    default:
        break;
    }
}

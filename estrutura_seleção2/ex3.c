#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int opcao;
    char usarNovamente[50];
    float soma = 0, subtracao, div, mult = 1, elevacao, raiz, resto;

    do{
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
        puts("");

        switch (opcao){
            case 1: {
                int n;
                printf("Quantos números serão somados? \n");
                scanf("%d", &n);

                float num[n];

                for (int i=0; i<n; i++){
                    printf("Digite o número %d \n", i+1);
                    scanf("%f", &num[i]);

                    soma += num[i];

                }

                printf("A soma dos números digitados é: %.1f\n", soma);
                break;
            }

            case 2:{
                int n;
                printf("Quantos números serão subtraidos? \n");
                scanf("%d", &n);

                float num[n];

                for (int i=0; i<n; i++){
                    printf("Digite o número %d \n", i+1);
                    scanf("%f", &num[i]);

                    soma += num[i];
                    subtracao = num[0] - (soma - num[0]);

                }

                printf("A subtração dos números digitados é: %.1f \n", subtracao);
                break;
            }

            case 3:{
                float dividendo, divisor;

                printf("Digite o dividendo: ");
                scanf("%f", &dividendo);
                printf("Digite o divisor: ");
                scanf("%f", &divisor);

                div = dividendo/divisor;

                printf("O resultado da divisão é: %.1f", div);
                break;
            }

            case 4:{
                int n;
                printf("Quantos números serão multiplicados? ");
                scanf("%d", &n);

                float num[n];

                for (int i=0; i<n; i++){
                    printf("Digite o número %d: ", i+1);
                    scanf("%f", &num[i]);

                    mult *= num[i];
                }

                printf("A multiplicação dos números digitados é: %.1f\n", mult);
            }

            case 5:{
                float base;
                int expoente;

                printf("Qual o número que será elevado? ");
                scanf("%f", &base);
                printf("Por qual número %.1f será elevado? ", base);
                scanf("%d", &expoente);

                elevacao = pow(base, expoente);

                printf("O resultado da potência é: %.1f\n", elevacao);
                break;
            }

            case 6: {
                char resp[50];
                float n;

                printf("Qual raíz você deseja calcular, quadrada ou cubica? ");
                scanf(" %s", resp);

                if (strcmp(resp, "quadrada") == 0){ // compara a string
                    printf("Qual o número que você deseja calcular a raíz quadrada? ");
                    scanf("%f", &n);
                    if (n < 0){
                        printf("A raíz quadrada de %.1f não existe!\n", n);
                    }else {
                        raiz = sqrt(n);
                        printf("A raíz quadrada de %.1f é: %.1f\n", n, raiz);
                    }
                }else if (strcmp(resp, "cubica") == 0){
                    printf("Qual o número que você deseja calcular a raíz cubica? ");
                    scanf("%f", &n);

                    raiz = cbrt(n);

                    printf("A raíz cubica de %.1f é: %.1f\n", n, raiz);
                }

                break;
            }

            case 7:{
                int dividendo, divisor;

                printf("Qual o dividendo da conta que você deseja saber o resto? ");
                scanf("%d", &dividendo);
                printf("Qual o divisor da conta que você deseja saber o resto? ");
                scanf("%d", &divisor);

                resto = dividendo % divisor;

                printf("O resto da divisão de %d por %d é: %.1f\n", dividendo, divisor, resto);
                break;
            }
        
            default:
                printf("[ERRO] opção inválida!\n");
                break;
        }

        printf("Deseja usar novamente a calculadora? [s/n] ");
        scanf(" %s", usarNovamente);

    }while (strcmp(usarNovamente, "s") == 0);

}

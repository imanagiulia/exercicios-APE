#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    int i;
    float a, b, c;

    printf("Digite o  valor de A: ");
    scanf("%f", &a);

    printf("Digite o  valor de B: ");
    scanf("%f", &b);

    printf("Digite o  valor de C: ");
    scanf("%f", &c);

    printf("De qual forma você deseja que os números sejam ordenados?\n");
    printf("A, B, e C em ordem crescente [1]\n");
    printf("A, B, e C em ordem decrescente [2]\n");
    printf("O maior entre os dois números[3]\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1: 
        if ( a  > b && a > c && b > c){
            printf("%.1f %.1f %.1f", c, b, a);
        }else if (b > a && b > c && a > c){
            printf("%.1f %.1f %.1f", c, a, b);
        }else if ( c > a && c > b && a > b){
            printf("%.1f %.1f %.1f", b, a, c);
        }else if ( c > b && c > a && b > a){
            printf("%.1f %.1f %.1f", a, b, c);
        }else if ( a > c && a > b && c > b){
            printf("%.1f %.1f %.1f", b, c, a);
        }else{
            printf("%.1f %.1f %.1f", a, c, b);
        }
        break;

    case 2:
        if ( a  < b && a < c && b < c){
            printf("%.1f %.1f %.1f", c, b, a);
        }else if (b < a && b < c && a < c){
            printf("%.1f %.1f %.1f", c, a, b);
        }else if ( c < a && c < b && a < b){
            printf("%.1f %.1f %.1f", b, a, c);
        }else if ( c < b && c < a && b < a){
            printf("%.1f %.1f %.1f", a, b, c);
        }else if ( a < c && a < b && c < b){
            printf("%.1f %.1f %.1f", b, c, a);
        }else{
            printf("%.1f %.1f %.1f", a, c, b);
        }
        break;

    case 3:
        if (a > b && a > c){
            printf("%.1f %.1f %.1f", b, a, c);
        }else if(b > a && b > c){
            printf("%.1f %.1f %.1f", a, b, c);
        }else{
            printf("%.1f %.1f %.1f", b, c, a);
        }
    default:
        printf("[ERRO] Número inválido!");
        break;
    }
}
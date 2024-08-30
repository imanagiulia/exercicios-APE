// atividade representar número inteiro em fração

#include <math.h>
#include <stdio.h>

void verificarNumero(double num);

int main(){
    double n, d;

    printf("Digite um número: ");
    scanf("%lf", n);


    verificarNumero(n);
    puts("");

}

void verificarNumero(double num){
    double parteInteira;
    double parteFracionaria = modf(num, &parteInteira);
    float x, d, n;
    if (parteFracionaria == 0.0){
        x = num;
        n = parteInteira;
        d = parteFracionaria + 1;

        printf("%.2f = %.1f/%.1f", x, n, d);

    }else {
        if (parteFracionaria < 1){
            x = num;
            n = num*100;
            d = 100;

            printf("%.3f = %.1f / %.1f ", x, n, d);
        }else {
            x = num;
            n = num*10;
            d = 10;

            printf("%.2f = %.1f / %.1f ", x, n, d);
            }
       }
    }

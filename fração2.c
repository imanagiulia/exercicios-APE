// Atividade 2 - primeiro bimestre
// Desenvolva um programa que apresente a representação em fração decimal de números racionais.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "pt-BR");

    float num;

    printf("Digite um número para saber sua representação em forma de fração: ");
    scanf("%f", &num);

    double parteInteira;
    double parteFracionaria = modf(num, &parteInteira);
    float x, d, n;

    if (parteFracionaria == 0.0){ // representação para números inteiros
        x = num;
        n = parteInteira;
        d = parteFracionaria + 1;

        printf("%0.f = %.1f / %.1f \n", x, n, d);
    }else {
        if (parteFracionaria < 1){
            x = num;
            n = num*100;
            d = 100;

            printf("%f = %.1f / %.1f ", x, n, d);
        } else {
            x = num;
            n = num*10;
            d = 10;

            printf("%.2f = %.1f / %.1f ", x, n, d);
        }
    }
}
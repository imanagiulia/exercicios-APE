#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float notas[1];

    for (int i = 0; i < 2; i++)
    {
        do {
            printf("Digite a nota %d: ", i+1);
            scanf("%f", &notas[i]);
        }while (notas[0] < 0 || notas[0] > 10 || notas[1] < 0 || notas[1] > 10);
    }
    
    float media = (notas[0] + notas[1])/2;

    printf("A média das notas é: %.1f", media);
}
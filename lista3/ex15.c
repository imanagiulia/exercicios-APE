#include <stdio.h>

int main(){
    int soma = 0;
    int num = 0;
    float media;

    for ( int i = 15; i <= 100; i++){
        soma += i;
        num++; // quantidade de números que serão somados
    }
    
    media = soma/num;

    printf("A média é %.2f", media);
 
}
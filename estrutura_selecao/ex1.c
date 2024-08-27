#include <stdio.h>

int main() {
    int dataNasc[1];
    int sepSoma[1];
    int somaNasc, somaSep, resultado;
    
    printf("Digite sua data de nascimento (dd/mm/aa, apenas números): \n");
    scanf("%4d%4d%", &dataNasc[0], &dataNasc[1]);
    
    somaNasc = dataNasc[0]+dataNasc[1]; //soma da data de nascimento
    
    sepSoma[0] = somaNasc/100; //primeira parte da soma
    sepSoma[1] = somaNasc%100; //segunda parte da soma
    
    somaSep = sepSoma[0] + sepSoma[1]; // soma as duas partes da soma anterior
    resultado = somaSep%5;
    
    if (resultado = 0){
        printf("O seu perfil é tímido!");
    }else if (resultado = 1){
        printf("O seu perfil é sonhador!");
    }else if (resultado = 2){
        printf("O seu perfil é paquerador!");
    }else if (resultado = 3){
        printf("O seu perfil é atraente!");
    }else {
        printf("O seu perfil é irresistível");
    }

    return 0;
}

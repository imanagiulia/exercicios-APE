#include <stdio.h>
#include <locale.h>

int main(){
    char nome, sexo;
    float altura, pesoIdeal;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    if (sexo == 'm'){
        pesoIdeal = (72.7 * altura) - 58;
        printf("%c, seu peso ideal é %.2f!", nome , pesoIdeal);
    }else if (sexo == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("%c, seu peso ideal é %.2f", nome,  pesoIdeal);
    }else {
        printf("Você inseriu algum dado inválido!");
    }
}
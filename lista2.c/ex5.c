#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int anoAtual, anoNasc, idade;

    printf("Digite em qual ano estamos: ");
    scanf("%d", &anoAtual);

    printf("Digite em qual ano você nasceu: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    if (idade < 18){
        printf("Você ainda não poderá votar este ano!");
    }else {
        printf("Você poderá votar este ano!");
    }
}
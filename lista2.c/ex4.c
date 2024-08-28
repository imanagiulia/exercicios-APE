#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float notas[1], soma = 0;

    for (int i=0; i<2; i++){
        printf("Digite a nota %d do aluno: ", i+1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    float media = soma/2;

    if (media < 7){
        printf("Com a média %.1f o aluno foi REPROVADO!", media);
    }else {
        printf("Com a média %.1f o aluno foi APROVADO!", media);
    }
}
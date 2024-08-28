#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horasMes;
    float salHora, salMes;

    printf("Digite as horas trabalhadas no mês: ");
    scanf("%d", &horasMes);

    printf("Digite o salário por horas: ");
    scanf("%f", &salHora);

    int horaExtra = horasMes - 160; // 40h/semana e 4 semans -> 40*4 = 160h/ mes horas padrão;

    if (horaExtra > 0){
        salMes = (salHora*160) + (salHora + (salHora * 50/100)) * horaExtra;
        printf("O seu salário total deste mês foi de R$%.2f", salMes);
    }else {
        salMes = salHora*160;
        printf("O seu salário total deste mês foi de R$%.2f", salMes);
    }

}
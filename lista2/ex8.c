#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horaInicio, horaFim, horaTotal;
    char dias; 

    printf("O jogo durou mais de um dia? (s/n)");
    scanf(" %c", &dias);

    if(dias == 's'){
        int horaInicio2, horaFim2;

        printf("Digite a hora que o jogo começou no primeiro dia (sistema militar, 0-24)");
        scanf("%d", &horaInicio);

        printf("Digite a hora que o jogo terminou no primeiro dia(sistema militar, 0-24): ");
        scanf("%d", &horaFim);

        printf("Digite a hora que o jogo começou no segundo dia (sistema militar, 0-24)");
        scanf("%d", &horaInicio2);

        printf("Digite a hora que o jogo terminou no segundo dia(sistema militar, 0-24): ");
        scanf("%d", &horaFim2);

        horaTotal = (horaFim - horaInicio) + (horaFim2 - horaInicio2);

        printf("A hora total da partida foi de %d horas", horaTotal);
    }else {
        printf("Digite a hora que o jogo começou (sistema militar, 0-24): ");
        scanf("%d", &horaInicio);

        printf("Digite a hora que o jogo terminou (sistema militar, 0-24): ");
        scanf("%d", &horaFim);

        horaTotal = horaFim - horaInicio;

        printf("A hora total da partida foi de %d horas", horaTotal);
    }

}
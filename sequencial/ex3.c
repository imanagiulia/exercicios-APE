#include <stdio.h>

int main() {
   float salInicial, perAumento, valorAumento, salNovo;
   
   printf("--------------------------------------------- \n");
   printf("VAMOS CALCULAR O QUANTO SEU SALÁRIO AUMENTOU. \n");
   printf("--------------------------------------------- \n");
   
   printf("Digite o valor ATUAL do seu salário: \n");
   scanf("%f", &salInicial);
   printf("Digite o PERCENTUAL DE AUMENTO do seu salário: \n");
   scanf("%f", &perAumento);
   
   salNovo = salInicial + (salInicial * perAumento)/100;
   valorAumento = salNovo - salInicial;
   
   printf("O valor do seu novo salarário com um aumento de %.1f porcento será de: %.1f \n",       perAumento, salNovo);
   printf("Você teve um aumento de R$%.1f. ", valorAumento);
   
   return 0;
}


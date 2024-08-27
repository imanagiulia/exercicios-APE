#include <stdio.h>

int main() {
   float nota1, nota2, nota3, peso1, peso2, peso3;
   
   printf("------------------------------------------------ \n");
   printf("VAMOS CALCULAR A MÉDIA PONDERADA DE TRÊS  NOTAS. \n");
   printf("------------------------------------------------ \n");
   
   printf("Informe qual o VALOR da primeira nota: \n");
   scanf("%f", &nota1);
   printf("Informe o PESO da primeira nota: \n");
   scanf("%f", &peso1);
   
   printf("Informe qual o VALOR da segunda nota: \n");
   scanf("%f", &nota2);
   printf("Informe o PESO da segunda nota: \n");
   scanf("%f", &peso2);
   
   printf("Informe qual o VALOR da segunda nota: \n");
   scanf("%f", &nota3);
   printf("Informe o PESO da segunda nota: \n");
   scanf("%f", &peso3);
   
   float mediaP = (nota1 * peso1 + nota2 * peso2 + nota3 + peso3)/(peso1 + peso2 + peso3);
   
   printf("A média ponderada entre os três números é: %.2f", mediaP);
    
   return 0;
}

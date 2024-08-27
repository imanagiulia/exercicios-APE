#include <stdio.h>
#include <math.h> // biblioteca para funções matemáticas

int main() {
  int segundos;
  float minutos, horas, dias;
  
  printf("Digite a quantidade de SEGUNDOS \n");
  scanf("%d", &segundos);
  
  minutos = segundos/60;
  horas = minutos/60;
  dias = horas/24; 
  
  printf("A quantidade de segundos digitada equivale a: \n");
  printf("%.1f em minutos \n", minutos);
  printf("%.1f em horas \n", horas);
  printf("%.1f em dias \n", dias);
   return 0;
}


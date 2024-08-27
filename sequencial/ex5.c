#include <stdio.h>
#include <math.h> // biblioteca para funções matemáticas

int main() {
  int pesoSaco;
  float restoSaco, qntRacao;
  
  printf("Digite o peso, em gramas, do saco de ração: \n");
  scanf("%d", &pesoSaco);
  printf("Digite o valor, em gramas, fornecido para cada gato diariamente: \n");
  scanf("%f", &qntRacao);
  
  restoSaco = pesoSaco - ((qntRacao * 2) * 5);
  
    if (restoSaco <= 0){
    printf("Não restará ração após cinco dias");
  } else {
    printf("Após cinco dias restará nesse saco de ração %.0fg", restoSaco);
  }
   return 0;
}


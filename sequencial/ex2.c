#include <stdio.h>
#include <math.h> // biblioteca para poder usar a função de raiz quadrada

int main() {
   float px1, py1, px2, py2; 
   
   printf("--------------------------------------------- \n");
   printf("VAMOS CALCULAR A DIST NCIA ENTRE DOIS PONTOS. \n");
   printf("--------------------------------------------- \n");
   
   printf("Digite a posição x do ponto 1: \n");
   scanf("%f", &px1);
   printf("Digite a posição y do ponto 1: \n");
   scanf("%f", &py1);
   
   printf("Digite a posição x do ponto 2: \n");
   scanf("%f", &px2);
   printf("Digite a posição y do ponto 2: \n");
   scanf("%f", &py2);
   
   float disXY = sqrt((px1 - px2) * (px1 - px2) + (py1 - py2) * (py1 - py2)); //sqrt é para raiz quadrada
   
   printf("A distância entre os pontos %.0f,%.0f e %.0f,%.0f é: %.1f", px1, py1, px2, py2, disXY);
   
   return 0;
}

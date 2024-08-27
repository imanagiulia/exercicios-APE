#include <math.h> // biblioteca para funções matemáticas

int main() {
  int num;
   
  printf("Digite um número inteiro e positivo \n");
  scanf("%d", &num);
    if (num < 0){
    do {
      printf("O número digitado é inválido! Por favor, digite um número positivo.\n");
      scanf("%d", &num);
    } while (num < 0);
    }
    int quadrado = num * num;
    printf("O quadrado de %d é: %d \n", num, quadrado);
    
    int cubo = num * num * num;
    printf("O cubo de %d é: %d \n", num, cubo);
    
    int raizQ = sqrt(num);
    printf("A raíz quadrada de %d é: %d \n", num, raizQ);
    
    int raizC = pow(num, 1.0/3.0);
    printf("A raíz cubica de %d é: %d \n", num, raizC);

   return 0;
}

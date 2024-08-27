#include <stdio.h>

int main(){
    int x, y, z;
    
    printf("Digite o valor do primeiro lado do triângulo: \n");
    scanf("%d", &x);
    
    printf("Digite o valor do segundo lado do triângulo: \n");
    scanf("%d", &y);
    
    printf("Digite o valor do terceiro lado do triângulo: \n");
    scanf("%d", &z);
    
    if (x > (y + z) || y > (x + z) || z > (x + y)){
        printf("Os valores %d %d %d não formam um triângulo!", x, y, z);
    }else if (x == y && x == z && y == z ){
        printf("O triângulo é equilátero");
    }else if (x == y || x == z || y == z){
        printf("O triângulo é isósceles!");
    }else {
        printf("O triângulo é escaleno");
    }

    return 0;
}

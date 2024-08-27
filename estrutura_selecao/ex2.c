#include <stdio.h>

int main() {
    float nota[2];
    
    for (int i=0; i<3; i++){
        printf("Digite o valor da nota %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    
    float media = ((nota[0]*2) + (nota[1]*3) + (nota[2]*5))/(2+3+5);
    
    if (media >= 8 ){
        printf("com a média %.2f, o seu conceito é A!", media);
    } else if (media >= 7 && media <=7.99){
        printf("com a média %.2f, o seu conceito é B!", media);
    }else if (media >= 6 && media <= 6.99){
        printf("com a média %.2f, o seu conceito é C!", media);
    }else if (media >= 5 && media <= 5.99){
        printf("com a média %.2f, o seu conceito é D!", media);
    }else {
        printf("com a média %.2f, o seu conceito é E!", media);
    }
    
    return 0;
}

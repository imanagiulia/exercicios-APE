#include <stdio.h>

int main(){
    float nota[2];
    float soma = 0;
    
    for (int i=0; i<3; i++){
        printf("Digite o valor da nota %d: ", i+1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }
    
    float media = soma/3;
    
    if (media >= 0 && media <= 2.99 ){
        printf("Com a média %.2f, você foi REPROVADO!", media);
    }else if (media >=3 && media <= 6.99){
        printf("Com a média %.2f, você terá que fazer novamente o EXAME!", media);
    }else {
        printf("Com a média %.2f, você foi APROVADO!", media);
    }
    
    return 0;
    
}

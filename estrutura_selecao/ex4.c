#include <stdio.h>

int main(){
    float num[1];
    
    for (int i=0; i<2; i++){
        printf("Digite o primeiro número: ");
        scanf("%f", &num[i]);
    }
    
    if (num[0] > num[1]){
        printf("O maior número digitado foi %.2f", num[0]);
    }else {
        printf("O maior número digitado foi %.2f", num[1]);
    }
    return 0;
}

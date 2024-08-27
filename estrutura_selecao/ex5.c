#include <stdio.h>

int main(){
    int num[3];
    
    for (int i=0; i<3; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &num[i]);
    }
    
    if (num[0] > num[1] && num[0] > num[2] && num[1] > num[2]){
        printf("%d %d %d", num[0], num[1], num[2]);
    }else if (num[1] > num[0] && num[1] > num[2] && num[0] > num[2]){
        printf("%d %d %d", num[1], num[0], num[2]);
    }else if (num[2] > num[0] && num[2] > num[1] && num[0] > num[1]){
        printf("%d %d %d", num[2], num[0], num[1]);
    }else if (num[0] > num[1] && num[0] > num[2] && num[2] > num[1]){
        printf("%d %d %d", num[0], num[2], num[1]);
    }else if (num[1] > num[0] && num[1] > num[2] && num[2] > num[0]){
        printf("%d %d %d", num[1], num[2], num[0]);
    }else if (num[2] > num[0] && num[2] > num[1] && num[1] > num[0]){
        printf("%d %d %d", num[2], num[1], num[0]);
    }else {
        printf("%d %d %d",  num[0] ,num[1], num[2] );
    }
}

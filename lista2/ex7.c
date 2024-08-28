#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num[2];

    for( int i=0; i<2; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &num[i]);
    }

    if (num[0] < num[1]){
        printf("%d %d", num[0], num[1]);
    }else {
        printf("%d %d", num[1], num[0]);
    }
}
#include <stdio.h>

int main(){
    int data[2], data2[2];
    
    printf("Digite a primeira data (dd/mm/aa), apenas os números: \n");
    scanf("%2d%2d%4d", &data[0], &data[1], &data[2]);
    printf("%d %d %d \n", data[0], data[1], data[2]);
    
    printf("Digite a segunda data (dd/mm/aa), apenas os números: \n");
    scanf("%2d%2d%4d", &data2[0], &data2[1], &data2[2]);
    
    printf("%d %d %d \n", data2[0], data2[1], data2[2]);
    
    if (data[2] > data2[2]){
        printf("%d%d%d é cronologicamente maior que %d%d%d",data[0], data[1], data[2], data2[0], data2[1], data2[2]);    
    }else if (data2[2] > data[2]){
        printf("%d%d%d é cronologicamente maior que %d%d%d", data2[0], data2[1], data2[2], data[0], data[1], data[2]);
    }else if (data[2] > data2[2] && data[1] > data2[1]){
        printf("%d%d%d é cronologicamente maior que %d%d%d", data[0], data[1], data[2], data2[0], data2[1], data2[2]);
    }else if (data2[2] > data[2] && data2[1] > data[1]){
        printf("%d%d%d é cronologicamente maior que %d%d%d", data2[0], data2[1], data2[2], data[0], data[1], data[2]);
    }else if (data[2] > data2[2] && data[1] > data2[1] && data[0] > data2[0]){
        printf("%d%d%d é cronologicamente maior que %d%d%d", data[0], data[1], data[2], data2[0], data2[1], data2[2]);
    }else {
        printf("%d%d%d é cronologicamente maior que %d%d%d", data2[0], data2[1], data2[2], data[0], data[1], data[2]);
    }
    
    return 0;
    }

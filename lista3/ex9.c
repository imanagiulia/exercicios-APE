#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");


    for ( int i = 100; i < 110; i++){
        printf("%d \n", i+1);
    }

}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    for( int i=0; i<10; i++){
        printf("%d \n", i+1);
    }
}
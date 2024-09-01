#include <stdio.h>
#include <locale.h>

int main(){
    for (int i = 1; i <= 10; i++){
        int result = i*8;
        printf("8 x %d = %d \n", i, result);
    }
}

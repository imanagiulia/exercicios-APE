#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");

    float peso, altura;

    printf("Qaul o seu peso? ");
    scanf("%f", &peso);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    if (peso <= 60 && altura < 1.20){
        printf("sua classificação é A");
    }else if (peso <= 60 && (altura >= 1.20 && altura <=1.70)){
        printf("sua classificação é B");
    }else if (peso <= 60 && altura > 1.70){
        printf("sua classificação é C");
    }else if ((peso > 60 && peso <= 90) && altura < 1.20 ){
        printf("sua classificação é D");
    }else if ((peso > 60 && peso <= 90) && (altura >= 1.20 && altura <=1.70)){
        printf("sua classificação é E");
    }else if ((peso > 60 && peso <= 90) && altura > 1.70){
        printf("sua classificação é F");
    }else if (peso > 90 && altura < 1.20){
        printf("sua classificação é G");
    }else if (peso > 90 && (altura >= 1.20 && altura <=1.70)){
        printf("sua classificação é H");
    }else {
        printf("sua classificação é I");
    }
}
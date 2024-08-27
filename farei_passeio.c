#include <stdio.h> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 

    char respCompromisso, respCidade, respDinheiro, respChuva, respPerto;

    printf("Tenho compromisso no dia? \n");
    scanf("%c", &respCompromisso);

    if (respCompromisso == 's'){
        printf("Não vou ao passeio!");
    }else {
        printf("Vou estar na cidade? \n");
        scanf(" %c", &respCidade);
        if (respCidade == 'n'){
            printf("Não vou ao passeio!");  
        }else {
            printf("Tenho dinheiro?" );
            scanf(" %c", &respDinheiro);
            if (respDinheiro == 's'){
                printf("Está chovendo ?");
                scanf(" %c", &respChuva);
                if (respChuva == 's'){
                    printf("Não vou ao passeio!");
                }else {
                    printf("Eu vou ao passeio!");
                }
            }else {
                printf("É perto? ");
                scanf(" %c", &respPerto); 
                if (respPerto == 'n'){
                    printf("Não vou ao passeio!");
                }else {
                    printf("Eu vou ao passeio!");
                }

            }
        }
    }
    return 0;

}
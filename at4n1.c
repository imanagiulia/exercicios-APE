// um programa que busca em um vetor de 1000 inteiros por números escolhidos pela pessoa usuária.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int vetor[1000], num;
    int encontrado = 0;

    srand(time(NULL));

    for (int i = 0; i < 1000; i++)
    {
        vetor[i] = rand() % 1000;
    }

    qsort(vetor, 1000, sizeof(int), compare);

    printf("Digite um número para saber se ele se encontra no vetor: ");
    scanf("%d", &num);

    if (num >= vetor[500])
    {
        if (num >= vetor[750])
        {
            if (num >= vetor[850])
            {
                if (num >= vetor[950])
                {
                    for (int i = 950; i <= 1000; i++)
                    {
                        if (num == vetor[i])
                        {
                            printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                            encontrado = 1;
                        }
                    }
                }
                else
                {
                    for (int i = 850; i <= 950; i++)
                    {
                        if (num == vetor[i])
                        {
                            printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                            encontrado = 1;
                        }
                    }
                }
            }
            else
            {
                for (int i = 750; i <= 850; i++)
                {
                    if (num == vetor[i])
                    {
                        printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                        encontrado = 1;
                    }
                }
            }
        }
        else
        {
            for (int i = 500; i <= 750; i++)
            {
                if (num == vetor[i])
                {
                    printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                    encontrado = 1;
                }
            }
        }
    }
    else if (num < vetor[500])
    {
        if (num <= vetor[250])
        {
            if (num <= vetor[125])
            {
                if (num <= vetor[62])
                {
                    if (num <= vetor[31])
                    {
                        if (num <= vetor[16])
                        {
                            for (int i = 16; i >= 0; i--)
                            {
                                if (num == vetor[i])
                                {
                                    printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                                    encontrado = 1;
                                }
                            }
                        }
                        else
                        {
                            for (int i = 31; i >= 16; i--)
                            {
                                if (num == vetor[i])
                                {
                                    printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                                    encontrado = 1;
                                }
                            }
                        }
                    }
                    else
                    {
                        for (int i = 62; i >= 31; i--)
                        {
                            if (num == vetor[i])
                            {
                                printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                                encontrado = 1;
                            }
                        }
                    }
                }
                else
                {
                    for (int i = 125; i >= 62; i--)
                    {
                        if (num == vetor[i])
                        {
                            printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                            encontrado = 1;
                        }
                    }
                }
            }
            else
            {
                for (int i = 250; i >= 125; i--)
                {
                    if (num == vetor[i])
                    {
                        printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                        encontrado = 1;
                    }
                }
            }
        }
        else
        {
            for (int i = 500; i >= 250; i--)
            {
                if (num == vetor[i])
                {
                    printf("\nO número %d se encontra na posição %d do vetor!", num, i);
                    encontrado = 1;
                }
            }
        }
    }
     
    if (encontrado == 0){
        printf("\nO número não foi encontrado no vetor =(");
    }
   
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

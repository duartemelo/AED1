/**
 * @file main.c
 * @author Duarte Melo e João Diogo
 * @brief Implementação C relativa à questão 8
 * @version 0.1
 * @date 2020-11-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificaPrimo(int numero);

int main()
{

    int numero, limiteInferior = 0, limiteSuperior = 100, somatorioPrimos = 0, contadorPrimos = 0;
    float mediaPrimos;

    srand(time(NULL));
    for (int i = 0; i < 70; i++)
    {
        numero = rand() % (limiteSuperior - limiteInferior) + limiteInferior;
        printf("%d\n", numero);
        if (verificaPrimo(numero) == 1){
            somatorioPrimos += numero;
            contadorPrimos++;
        }
    }

    mediaPrimos = (float) somatorioPrimos / contadorPrimos;

    puts("\n");

    printf("Soma dos numeros primos: %d\n", somatorioPrimos);
    printf("Media dos numeros primos: %.2f", mediaPrimos);
}

int verificaPrimo(int numero)
{
    int primo = 1, i = 2;
    // 1 e 0 sao nao primos
    if (numero == 0 || numero == 1)
    {
        return 0;
    }
    // nao é primo se for divisivel por algum numero entre 2 e num-1, e quebra assim que for divisivel por algum numero
    while(i < numero && primo == 1){
        if (numero % i == 0)
        {
            primo = 0;
        }
        i++;
    }
    
    //caso não tenha retornado nada anteriormente, o numero é primo
    return primo;
}
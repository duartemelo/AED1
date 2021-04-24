/**
 * @file main.c
 * @author Duarte Melo e João Diogo
 * @brief Implementação em C da solução relativa à Questão 6
 * @version 0.1
 * @date 2020-11-16
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main(){
    int idade , contador = 0;

    printf("Escreva a idade (-1 para terminar): ");
    scanf("%d", &idade);
   
    while (idade != -1){
        

        if (idade >= 15 && idade < 48){
            contador++;
        }
        printf("Escreva a idade (-1 para terminar): ");
        scanf("%d", &idade);
    }

    printf("%d pessoas tem 15 anos ou mais e menos de 48 anos.", contador);

}
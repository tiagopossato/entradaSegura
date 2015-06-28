/* 
 * File:   main.c
 * Author: tiago
 *
 * Created on 28 de Junho de 2015, 09:03
 */

#include <stdio.h>
#include <stdlib.h>
#include "entradaSegura.h"

/*
 * Testando a biblioteca
 */
int main(int argc, char** argv) {

     printf("Voce digitou: %u\n", leUInt("Digite um numero sem sinal: "));
     printf("Voce digitou: %d\n", leInt("Digite um numero: "));
    return (EXIT_SUCCESS);
}


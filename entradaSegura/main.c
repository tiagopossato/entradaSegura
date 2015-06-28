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

    int entrada;

    entrada = leInt("Digite um numero: ");

    printf("Voce digitou: %d", entrada);
    return (EXIT_SUCCESS);
}


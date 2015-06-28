#include "entradaSegura.h"

int leInt(char *msg) {
    char tmp[15];
    int k=0;
entrada:
    printf("%s", msg);
    scanf(" %s", tmp);
    if (tmp[0] != '-') {
         if ((tmp[0] < '0' || tmp[0] > '9')) {//verifica se é número
            printf("Utilize somente numeros!\n");
            goto entrada;
        }
    }

    for (k = 1; k < strlen(tmp); k++) {
         if ((tmp[k] < '0' || tmp[k] > '9')) {//verifica se é número
            printf("Utilize somente numeros!\n");
            goto entrada;
        }
    }

    return atoi(tmp);
}

unsigned int leUInt() {
    char tmp[15];
    int k;
entrada:
    scanf(" %s", tmp);

    for (k = 0; k < strlen(tmp); k++) {
        if ((tmp[k] < '0' || tmp[k] > '9')) {//verifica se é número
            printf("Utilize somente numeros positivos!\n");
            goto entrada;
        }
    }
    return (unsigned int) atoi(tmp);
}

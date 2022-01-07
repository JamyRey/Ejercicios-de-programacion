#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 50

int rango(int min, int max);
void cadena_aleatoria(int longitud, char *destino);

int main(void) {

	srand(time(NULL));
    char destino[N+1] = "";
    cadena_aleatoria(N,destino);
    printf("%s", destino);
}
int rango(int min, int max) {
    return min+rand()/(RAND_MAX/(max-min+1)+1);
}
void cadena_aleatoria(int longitud, char *destino) {
    char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i=0; i<longitud; i++) {
        int a = rango(0,(int)strlen(c)-1);
        destino[i] = c[a];
    }
}

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

int main(){
    int Vetor[MAX], i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(NULL));
    printf("Exerc�cio 91 - Lista de Exerc�cios\n");
    for(i; i < MAX; i++){
        Vetor[i] = rand()%21;
    }
    printf("Checagem de Repeti��es: ");
    for(i = 0; i < MAX; i++){
        
    }
    
}
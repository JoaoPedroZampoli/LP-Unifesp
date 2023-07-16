#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

int main(){
    int Vetor[MAX], i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(NULL));
    printf("Exercício 91 - Lista de Exercícios\n");
    for(i; i < MAX; i++){
        Vetor[i] = rand()%21;
    }
    printf("Checagem de Repetições: ");
    for(i = 0; i < MAX; i++){
        
    }
    
}
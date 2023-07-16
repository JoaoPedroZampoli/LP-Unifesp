#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define MAX 100

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int Numeros[MAX];
    int i, Busca, Encontrou=0;

    srand(time(NULL));
    printf("Números: ");
    for(i=0; i<MAX; i++){
        Numeros[i] = rand()%101;
        printf("%i ", Numeros[i]);
    }

    printf("\nBusca: ");
    scanf("%i", &Busca);

    printf("Encontrado nas posições: ");
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("%i ",i);
            Encontrou=1;
        }
    }
    /* Quebra de Laço quando um número igual é encontrado:
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("Encontrado na posição: %i \n",i);
            break;
        }
    }
    */
    /*Usando continue ao invés do Break (Não quebra o laço mas ele não continua o que está a seguir (ignora e continua)):
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("Encontrado na posição: %i \n",i);
            continue;
        }
        printf("... ");
    }
    */
    if(Encontrou==0){
        printf("Nada Encontrado");
    }   
}
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
    printf("N�meros: ");
    for(i=0; i<MAX; i++){
        Numeros[i] = rand()%101;
        printf("%i ", Numeros[i]);
    }

    printf("\nBusca: ");
    scanf("%i", &Busca);

    printf("Encontrado nas posi��es: ");
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("%i ",i);
            Encontrou=1;
        }
    }
    /* Quebra de La�o quando um n�mero igual � encontrado:
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("Encontrado na posi��o: %i \n",i);
            break;
        }
    }
    */
    /*Usando continue ao inv�s do Break (N�o quebra o la�o mas ele n�o continua o que est� a seguir (ignora e continua)):
    for(i=0;i<MAX;i++){
        if(Numeros[i]==Busca){
            printf("Encontrado na posi��o: %i \n",i);
            continue;
        }
        printf("... ");
    }
    */
    if(Encontrou==0){
        printf("Nada Encontrado");
    }   
}
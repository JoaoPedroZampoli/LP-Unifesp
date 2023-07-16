#include <stdio.h>
#include <locale.h>

void MostrarIntervalo (int);

int main(){
    int Numero = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 18 - Intervalo entre Número e 1");
    do{
        printf("\nDigite um Número Inteiro Positivo: ");
        scanf("%i", &Numero);
    }while(Numero<=0);
    MostrarIntervalo(Numero);
}

void MostrarIntervalo(int Numero){
    if(Numero == 1){
        printf("\nNão há nada entre 1 e 1");
    }
    else{
        printf("\nNúmeros entre 1 e %i: \n", Numero);
        for(int i = 2; i < Numero; i++){
            printf("%i\t", i);
        }       
    }
}
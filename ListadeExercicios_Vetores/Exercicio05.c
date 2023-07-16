#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int Numeros[20], Par[20], Impar[20];
    int ContPar= 0, ContImpar=0, i;

    srand(time(NULL));
    printf("Número: ");
    for(i=0; i<20; i++){
        if(Numeros[i]%2==0){
            Par[ContPar] = Numeros[i];
            ContPar++;
        }
        else{
            Impar[ContImpar] = Numeros[i];
            ContImpar++;
        }
    }
    if(ContPar != 0){
        printf("\nPares: %i", ContPar);
    }
    else{
        printf("Não há Números Pares");
    }
    if(ContImpar != 0){
        printf("\nÍmpares: %i", ContImpar);
    }
    else{
        printf("Não há Números Ímpares");
    }
}   
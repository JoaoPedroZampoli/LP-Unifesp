#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int Numeros[20], Par[20], Impar[20];
    int ContPar= 0, ContImpar=0, i;

    srand(time(NULL));
    printf("N�mero: ");
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
        printf("N�o h� N�meros Pares");
    }
    if(ContImpar != 0){
        printf("\n�mpares: %i", ContImpar);
    }
    else{
        printf("N�o h� N�meros �mpares");
    }
}   
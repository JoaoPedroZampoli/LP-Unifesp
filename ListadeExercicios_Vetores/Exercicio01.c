#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int Numeros[5];

    for(int i = 0; i < 5; i++){
        printf("N�mero[%i] = ",i);
        scanf("%i",&Numeros[i]);
    }
    printf("\n\nResultados:");
    for(int i = 0; i < 5; i++){
        printf("\nN�mero[%i] = %i", i, Numeros[i]);
    }
}
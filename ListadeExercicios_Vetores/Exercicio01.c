#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int Numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Número[%i] = ",i);
        scanf("%i",&Numeros[i]);
    }
    printf("\n\nResultados:");
    for(int i = 0; i < 5; i++){
        printf("\nNúmero[%i] = %i", i, Numeros[i]);
    }
}
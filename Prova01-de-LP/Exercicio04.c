#include <stdio.h>

int main(){
    int Numero, Numero_Pares=0, Numero_Impares=0;
    for(int i = 0; i<20; i++){
        printf("\nDigite o %iº Número: ");
        scanf("%i",&Numero);
        if (Numero % 2 == 0){
            Numero_Pares += 1;
        }
        else{
            Numero_Impares += 1;
        }
    }
    printf("Pares: %i", Numero_Pares);
    printf("\nÍmpares: %i", Numero_Impares);
}
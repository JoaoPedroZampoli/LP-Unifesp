#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int VetorNumeros[4], Soma=0, Multiplicacao=1, i=0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 07 da Lista de Exerc�cios - Lista\n");
    for(i=0; i<5; i++){
        printf("\nDigite o %i� N�mero: ",i+1);
        scanf("%i", &VetorNumeros[i]);
        Soma = Soma + VetorNumeros[i];
        Multiplicacao = Multiplicacao * VetorNumeros[i];
    }
    printf("\nSoma: %i \nMultiplica��o: %i \nN�meros Informados: ", Soma, Multiplicacao);
    for(i=0; i<5; i++){
        if(i==4){
            printf("%i",VetorNumeros[i]);
        }
        else{
            printf("%i, ", VetorNumeros[i]);
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int VetorNumeros[9], SomaPotenciada=0, i=0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    for(i = 0; i<10; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &VetorNumeros[i]);
    }
    for(i = 0; i<10; i++){
        VetorNumeros[i]*=VetorNumeros[i];
        SomaPotenciada +=VetorNumeros[i];
    }
    printf("A Soma dos Quadrados dos Números informados é de: %i\n",SomaPotenciada);
}
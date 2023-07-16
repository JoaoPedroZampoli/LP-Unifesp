#include <stdio.h>
#include <locale.h>

int main(){
    int i = 0, VetorNumeros[20];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 83 - Ordem Inversa de Vetor\n");
    for(i=0; i<20; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &VetorNumeros[i]);
    }
    printf("\nAgora na ordem inversa:\n");
    for(i=19; i>=0; i--){
        printf("\n%iº Elemento: %i", i+1, VetorNumeros[i]);
    }
}
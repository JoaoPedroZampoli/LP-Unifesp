#include <stdio.h>
#include <locale.h>

int main(){
    int i = 0, VetorA[10], VetorB[10], VetorSoma[10];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 84 - Soma de Vetores\n");
    for(i=0; i<10; i++){
        printf("Digite o %i� N�mero do Vetor A: ", i+1);
        scanf("%i", &VetorA[i]);
    }
    printf("\nAgora voc� Dever� Digitar os Elementos do Vetor B\n");
    for(i=0; i<10; i++){
        printf("Digite o %i� N�mero do Vetor B: ", i+1);
        scanf("%i", &VetorB[i]);
    }
    for(i=0; i<10; i++){
        VetorSoma[i] = VetorA[i] + VetorB[i];
        printf("\n%i� Elemento: %i + %i = %i", i+1, VetorA[i], VetorB[i], VetorSoma[i]);
    }
}
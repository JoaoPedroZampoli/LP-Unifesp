#include <stdio.h>
#include <locale.h>

#define Valor 10

int main(){
    int Vetor[Valor], VetorChecagem[Valor], i = 0, j = 0, contRepetidos = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 91 - Comparação Elementos de Vetor\n");
    for(i = 0; i < Valor; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &Vetor[i]);
        VetorChecagem[i] = Vetor[i];
    }
    printf("\nOs Números repetidos foram:\n");
    for(i = 0; i < Valor; i++){
        for(j = i+1; j < Valor; j++){
            if(VetorChecagem[j] == Vetor[i]){
                printf("\nNúmero repetido: %i,", Vetor[i]);
                printf(" nas Posições: %d e %d", i, j);
                contRepetidos++;
            }
        }
    }
    if(contRepetidos == 0){
        printf("\nNão houveram repetições");
    }
    

}
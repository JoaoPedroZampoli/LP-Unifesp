#include <stdio.h>
#include <locale.h>

int main(){
    int A[10], M[10], X = 0, i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 82 - Multiplicação de Elementos de Um Vetor\n");
    for(i=0; i<10; i++){
        printf("Digite o %iº Número da Variável: ", i+1);
        scanf("%i", &A[i]);
    }
    printf("\nAgora digite um Número para Multiplicar todos os Elementos do Conjunto acima: ");
    scanf("%i", &X);
    for(i=0; i<10; i++){
        M[i] = A[i]*X;
        printf("\n%iº Elemento: %i X %i = %i", i+1, A[i], X, M[i]);
    }
}
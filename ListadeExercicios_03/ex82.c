#include <stdio.h>
#include <locale.h>

int main(){
    int A[10], M[10], X = 0, i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 82 - Multiplica��o de Elementos de Um Vetor\n");
    for(i=0; i<10; i++){
        printf("Digite o %i� N�mero da Vari�vel: ", i+1);
        scanf("%i", &A[i]);
    }
    printf("\nAgora digite um N�mero para Multiplicar todos os Elementos do Conjunto acima: ");
    scanf("%i", &X);
    for(i=0; i<10; i++){
        M[i] = A[i]*X;
        printf("\n%i� Elemento: %i X %i = %i", i+1, A[i], X, M[i]);
    }
}
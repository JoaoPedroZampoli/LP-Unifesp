#include <stdio.h>
#include <locale.h>

void Dec2Bin(int);

int main(){
    int N;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exemplo 2 de Recurs�o\n");
    printf("Digite um n�mero: ");
    scanf("%i", &N);
    Dec2Bin(N);
}

void Dec2Bin(int N){
    if(N/2 == 0){
        printf("\n%i", N%2);
    }
    else{
        Dec2Bin(N/2);
        printf("\n%i", N%2);
    }
}
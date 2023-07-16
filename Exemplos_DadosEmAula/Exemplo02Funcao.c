#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void preencherVetor(int[], int);
void imprimirVetor (int[], int);
int buscaVetor(int[], int, int);

int main(){
    int Vetor[10], Busca, Pos;

    setlocale(LC_ALL, "Portuguese_Brazil");
    preencherVetor(Vetor, 10);
    printf("Vetor: \n");
    imprimirVetor(Vetor, 10);
    printf("\nBusca: ");
    scanf("%i", &Busca);
    Pos = buscaVetor(Vetor, 10, Busca);
    if(Pos != -1){
        printf("\nEncontrado na Posição: %i", Pos+1);
    }
    else{
        printf("\nNão Encontrado");
    }
}

void preencherVetor(int Vetor[], int n){
    for(int i = 0; i < n; i++){
        Vetor[i] = rand()%101;
    }
}

void imprimirVetor(int Vetor[], int n){
    for(int i = 0; i < n; i++){
        printf("%i ", Vetor[i]);
    }
}

int buscaVetor(int Vetor[], int n, int b){
    for(int i = 0; i < n; i++){
        if(Vetor[i]==b){
            return i;
        }
    }
    return -1;
}
#include <stdio.h>
#include <locale.h>

int main(){
    int Matriz[4][5], SomaLinha[4] = {0}, SomaTotal = 0, i = 0, j = 0, Contador = 1;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 01 - Soma de Elementos de uma Matriz\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o %iº Número (%iº Linha): ", Contador, i+1);
            scanf("%i", &Matriz[i][j]);
            SomaLinha[i] += Matriz[i][j];
            SomaTotal += Matriz[i][j];
            Contador++;
        }
    }
    for(i = 0; i < 4; i++){
        printf("Soma da Linha %i = %i\n", i+1, SomaLinha[i]);
    }
    printf("A soma é igual a: %i", SomaTotal);
}
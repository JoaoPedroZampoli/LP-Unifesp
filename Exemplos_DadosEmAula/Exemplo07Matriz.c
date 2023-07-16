#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define M 8
#define N 8

int main(){
    int Matriz[M][N];
    int i, j;

    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(NULL));
    printf("Matriz: \n");
    for(i=0; i<M-1; i++){
        for(j=0; j<N; j++){
            Matriz[i][j] = rand()%100;
            printf("%i\t", Matriz[i][j]);
        }
        printf("\n");
    }
}
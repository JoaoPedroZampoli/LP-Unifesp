#include <stdio.h>
#include <locale.h>

int NumeroCombinacoes(int, int);

int main(){
    int N, R, Total;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 24\n");
    printf("Digite um valor para N: ");
    scanf("%i", &N);
    printf("\nAgora, Digite um valor para R: ");
    scanf("%i", &R);

    Total = NumeroCombinacoes(N, R);
    printf("\nNúmero de Combinações = %i", Total);
}

int NumeroCombinacoes(int N, int R){
    int Numerador = 1, Denominador = 1, Resultado = 0;

    for(int i = 1; i <= N; i++){
        Numerador*=i;
    }
    for(int i = 1; i <= R; i++){
        Denominador*=i;
    }
    for(int i = 1; i <= (N-R); i++){
        Denominador*=i;
    }

    Resultado = Numerador/Denominador;
    return Resultado;
}
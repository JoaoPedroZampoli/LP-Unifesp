#include <stdio.h>
#include <locale.h>

int Soma(int N1, int N2){
    return N1 + N2;
}

int main(){
    int N1, N2, S;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exemplo 01 - Função para Soma\n");
    printf("Digite o 1º Número: ");
    scanf("%i", &N1);
    printf("\nDigite o 2º Número: ");
    scanf("%i", &N2);
    //S = Soma(N1, N2);
    //printf("\nSoma = %i", S);
    printf("Soma = %i", Soma(N1, N2));
    return 0;
}
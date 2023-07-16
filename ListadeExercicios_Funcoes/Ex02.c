#include <stdio.h>
#include <locale.h>

int Divisao(int, int);

int main(){
    int N1, N2, Quociente;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 02 - Divisão usando Função");
    printf("\nDigite o 1º Número (Dividendo): ");
    scanf("%i", &N1);
    printf("\nAgora, escreva o 2º Número (Divisor): ");
    scanf("%i", &N2);
    Quociente = Divisao(N1, N2);
    printf("O quociente é igual a: %i", Quociente);
}

int Divisao(int N1, int N2){
    int Quociente = 0;
    if(N1>N2){
        for(Quociente = 0; N1>=N2; Quociente++){
            N1-=N2;
        }
        return Quociente;
    }
    else{
        return 0;
    }
}
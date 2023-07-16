#include <stdio.h>
#include <locale.h>

int Verificacao(int, int);
int Multiplicacao(int, int);

int main(){
    int N1, N2, Total;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 01 - Multiplicação com Função");
    printf("\nEscreva o 1º Número: ");
    scanf("%i", &N1);
    printf("\nAgora, escreva o 2º Número: ");
    scanf("%i", &N2);
    Total = Verificacao(N1, N2);
    printf("\nTotal: %i", Total);

}

int Verificacao(int N1, int N2){
    int Total = 0;
    int i = N2;
    if(N1 < 0 || N2 < 0){
        if((N1 < 0)&&(N2 < 0)){
            N1 *= -1;
            N2 *= -1;
            Total = Multiplicacao(N1, N2);
        }
        else{
            if(N1 < 0){
                N1 *= -1;
                Total = Multiplicacao(N1, N2);
                Total *= -1;
            }
            if(N2 < 0){
                N2 *= -1;
                Total = Multiplicacao(N1, N2);
                Total *= -1;
            }
        }
    }
    else{
        Total = Multiplicacao(N1, N2);
    }
    return Total;
}


int Multiplicacao(int N1, int N2){
    int Total = 0, i = N2;
    
    for(i; i > 0; i--){
        Total += N1;
        printf("I = %i \t Total = %i\n", i, Total);
    }

    return Total;
}

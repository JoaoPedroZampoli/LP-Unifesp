#include <stdio.h>
#include <locale.h>

int Fatorial(int);

int main(){
    int Numero, Resultado;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Digite um Número Inteiro: ");
    scanf("%i", &Numero);
    Resultado = Fatorial(Numero);
    printf("O Fatorial é %i", Resultado);
}

int Fatorial(int Numero){
    int Resultado;
    if(Numero == 0){
        Resultado = 1;
    }
    else{
        Resultado = Numero * Fatorial(Numero - 1);
    }

    return Resultado;
}
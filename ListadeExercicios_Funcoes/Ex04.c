#include <stdio.h>
#include <locale.h>

int InverterNumero(int);

int main(){
    int Numero, Inverso;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 04 - Invers�o de N�mero\n");
    printf("Digite um N�mero: ");
    scanf("%i", &Numero);
    Inverso = InverterNumero(Numero);
    printf("\nN�mero Invertido = %i", Inverso);
}

int InverterNumero(int Numero){
    int NumeroInvertido = 0, Digito = 0;
    while(Numero != 0){
        Digito = Numero % 10;
        NumeroInvertido = NumeroInvertido * 10 + Digito;
        Numero /= 10; 
    }
    return NumeroInvertido;
}
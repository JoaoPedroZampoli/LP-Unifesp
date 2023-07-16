#include <stdio.h>
#include <locale.h>

int Potencia(int, int);

int main(){
    int Base, Expoente, Total;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 03 - Potenciação com Função");
    printf("\nDigite a Base: ");
    scanf("%i", &Base);
    printf("\nAgora, digite o Expoente: ");
    scanf("%i", &Expoente);
    Total = Potencia(Base, Expoente);
    printf("\nA Potência de %i elevado a %i é igual a: %i", Base, Expoente, Total);
}

int Potencia(int Base, int Expoente){
    int Total = 1;
        for(int i = 0; i < Expoente; i++){
            Total *= Base;
        }
        return Total;
}
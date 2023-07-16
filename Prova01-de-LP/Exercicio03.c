#include <stdio.h>

int main(){
    int Numero, Maior, Soma;

    printf("Terceiro Exercício - Manipulação de 20 Números\n");
    printf("Digite o 1º Número: ");
    scanf("%i",&Numero);
    Soma = Maior = Numero;
    for(int i=2; i<=20; i++){
        printf("\nDigite o %iº Número: ", i);
        scanf("%i", &Numero);
        Soma += Numero;
        if (Numero>Maior){
            Maior = Numero;
        }
    }
    printf("O Maior número é: %i", Maior);
    printf("A Soma dos números é: %i", Soma);
}
#include <stdio.h>

int main(){
    int Numero_Conjuntos=0, Menor, Maior, Soma=0, Numero;

    while(Numero_Conjuntos<=0){
        printf("Digite o número de números dentro do conjunto: ");
        scanf("%i", &Numero_Conjuntos);
    }

    printf("\nDigite o número que faça parte do conjunto: ");
    scanf("%i", &Numero);
    Maior = Numero;
    Menor = Numero;
    Soma = Numero;
    for(int i = 1; i < Numero_Conjuntos; i++){
        printf("\nDigite o número que faça parte do conjunto: ");
        scanf("%i", &Numero);
        if (Numero<Menor){
            Menor=Numero;
        }
        if (Numero>Maior){
            Maior=Numero;
        }
        Soma += Numero;
    }
    printf("\nO menor número é: %i", Menor);
    printf("\nO maior número é: %i", Maior);
    printf("\nA soma dos números é de: %i", Soma);

}
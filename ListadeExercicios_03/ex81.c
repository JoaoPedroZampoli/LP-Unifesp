#include <stdio.h>
#include <locale.h>

int main(){
    int Q[20], MenorElemento = 0, PosicaoVetor = 0, i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 81 - Menor Elemento do Vetor\n");
    printf("Somente Números positivos são aceitos\n\n");
    for(i=0; i<20; i++){
        do{
            printf("Digite o %iº Número do Vetor: ", i+1);
            scanf("%i", &Q[i]);
        }while(Q[i] < 0);
        if(i==0){
            MenorElemento = Q[i];
            PosicaoVetor = 0;
        }
        else{
            if(Q[i] < MenorElemento){
                MenorElemento = Q[i];
                PosicaoVetor = i;
            }
        }
    }
    printf("\nO Menor Elemento é: %i \nA Posição desse elemento no Vetor é de: %i (O %iº Número Inserido)", MenorElemento, PosicaoVetor, PosicaoVetor+1);
}
#include <stdio.h>
#include <locale.h>

int main(){
    int Q[20], MenorElemento = 0, PosicaoVetor = 0, i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 81 - Menor Elemento do Vetor\n");
    printf("Somente N�meros positivos s�o aceitos\n\n");
    for(i=0; i<20; i++){
        do{
            printf("Digite o %i� N�mero do Vetor: ", i+1);
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
    printf("\nO Menor Elemento �: %i \nA Posi��o desse elemento no Vetor � de: %i (O %i� N�mero Inserido)", MenorElemento, PosicaoVetor, PosicaoVetor+1);
}
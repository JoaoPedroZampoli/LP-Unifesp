#include <stdio.h>
#include <locale.h>

int main(){
    int Q[20], MaiorElemento = 0, PosicaoVetor = 0, i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 80 - Maior Elemento do Vetor\n");
    printf("Somente N�meros positivos s�o aceitos\n\n");
    for(i=0; i<20; i++){
        do{
            printf("Digite o %i� N�mero do Vetor: ", i+1);
            scanf("%i", &Q[i]);
        }while(Q[i] < 0);
        if(i==0){
            MaiorElemento = Q[i];
            PosicaoVetor = 0;
        }
        else{
            if(Q[i] > MaiorElemento){
                MaiorElemento = Q[i];
                PosicaoVetor = i;
            }
        }
    }
    printf("\nO Maior Elemento �: %i \nA Posi��o desse elemento no Vetor � de: %i (O %i� N�mero Inserido)", MaiorElemento, PosicaoVetor, PosicaoVetor+1);
}
#include <stdio.h>
#include <locale.h>

int main(){
    int Vetor1[15], Vetor2[15], i = 0, contRepeticoes = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 89 - Compara��o de Vetores\n");
    printf("\nDigite os Valores para o 1� Vetor:\n");
    for(i = 0; i < 15; i++){
        printf("Digite o %i� N�mero: ", i+1);
        scanf("%i", &Vetor1[i]);
    }
    printf("\nAgora digite os valores para o 2� Vetor:\n");
    for(i = 0; i < 15; i++){
        printf("Digite o %i� N�mero: ", i+1);
        scanf("%i", &Vetor2[i]);
    }
    printf("\n\nOs valores repetidos nas mesmas posi��es dos vetores foram:\n");
    for(i = 0; i < 15; i++){
        if(Vetor1[i]==Vetor2[i]){
            printf("Posi��o: %i, N�mero: %i\n", i+1, Vetor1[i]);
            contRepeticoes++;
        }
    }
    if(contRepeticoes == 0){
        printf("N�o houveram repeti��es nas mesmas posi��es (Repeti��es = 0)");
    }
}
#include <stdio.h>
#include <locale.h>

int main(){
    int Vetor1[15], Vetor2[15], i = 0, contRepeticoes = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 89 - Comparação de Vetores\n");
    printf("\nDigite os Valores para o 1º Vetor:\n");
    for(i = 0; i < 15; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &Vetor1[i]);
    }
    printf("\nAgora digite os valores para o 2º Vetor:\n");
    for(i = 0; i < 15; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &Vetor2[i]);
    }
    printf("\n\nOs valores repetidos nas mesmas posições dos vetores foram:\n");
    for(i = 0; i < 15; i++){
        if(Vetor1[i]==Vetor2[i]){
            printf("Posição: %i, Número: %i\n", i+1, Vetor1[i]);
            contRepeticoes++;
        }
    }
    if(contRepeticoes == 0){
        printf("Não houveram repetições nas mesmas posições (Repetições = 0)");
    }
}
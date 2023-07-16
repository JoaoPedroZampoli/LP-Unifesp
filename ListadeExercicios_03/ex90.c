#include <stdio.h>
#include <locale.h>

int main(){
    int VetorNumeros[30], Numero = 0, i = 0, contRepeticoes = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 90 - Comparação Vetor/Variável\n");
    for(i = 0; i < 30; i++){
        printf("Digite o %iº Número: ", i+1);
        scanf("%i", &VetorNumeros[i]);
    }
    printf("\nAgora, digite um número para comparar: ");
    scanf("%i", &Numero);
    printf("\n\nAs repetições foram: \n");
    for(i = 0; i < 30; i++){
        if(VetorNumeros[i] == Numero){
            printf("Posição: %i é igual ao número %i\n", i+1, Numero);
            contRepeticoes++;
        }
    }
    if(contRepeticoes == 0){
        printf("Não houveram repetições (Repetições = 0)");
    }
}
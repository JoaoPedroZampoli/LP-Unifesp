#include <stdio.h>
#include <locale.h>

int main(){
    int VetorNumeros[30], Numero = 0, i = 0, contRepeticoes = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 90 - Compara��o Vetor/Vari�vel\n");
    for(i = 0; i < 30; i++){
        printf("Digite o %i� N�mero: ", i+1);
        scanf("%i", &VetorNumeros[i]);
    }
    printf("\nAgora, digite um n�mero para comparar: ");
    scanf("%i", &Numero);
    printf("\n\nAs repeti��es foram: \n");
    for(i = 0; i < 30; i++){
        if(VetorNumeros[i] == Numero){
            printf("Posi��o: %i � igual ao n�mero %i\n", i+1, Numero);
            contRepeticoes++;
        }
    }
    if(contRepeticoes == 0){
        printf("N�o houveram repeti��es (Repeti��es = 0)");
    }
}
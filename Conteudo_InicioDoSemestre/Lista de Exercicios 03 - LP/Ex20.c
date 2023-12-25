#include <stdio.h>

int main(){
    int Numero_Fatorial=-1;
    int Resultado=1, Escolha=1;

    while(Escolha==1){
        printf("\nCálculo de Número Fatorial");
        while(Numero_Fatorial<0 || Numero_Fatorial>16){
            printf("\nDigite um Número entre 0 e 16: ");
            scanf("%i", &Numero_Fatorial);
        }
        for (Numero_Fatorial; Numero_Fatorial>1; Numero_Fatorial=Numero_Fatorial-1){
            Resultado = Resultado * Numero_Fatorial;
        }
        printf("\nO resultado é: %i\n\n", Resultado);
        printf("\nVoce deseja continuar calculando Fatoriais?");
        printf("\nCaso sim, digite 1");
        printf("\nCaso contrário, digite qualquer outro número:\n");
        scanf("%i", &Escolha);
    }
}
#include <stdio.h>

int main(){
    int N1, N2, i;

    printf("Intervalo de Números\n");
    printf("Digite o Primeiro Número: ");
    scanf("%i", &N1);
    printf("\nAgora, digite o Segundo Número: ");
    scanf("%i", &N2);
    if(N1<N2){
        i = N1+1;
        printf("\nOs Números entre %i e %i são: ", N1, N2);
        for(i; i<N2; i++){
            printf("%i ",i);
        }
    }
    else if(N2<N1){
        i = N2+1;
        printf("\nOs Números entre %i e %i são: ", N1, N2);
        for(i; i<N1; i++){
            printf("%i ",i);
        }
    }
    else{
        printf("Ambos os números são iguais");
    }
    return 0;
}
#include <stdio.h>

int main(){
    float NumeroN, NumeroM=1, Soma;
    
    do{
        printf("Digite um número maior que 0 para N: ");
        scanf("%f", &NumeroN);
    }while(NumeroN<=0);
    printf("\nSoma = ");
    for(int i = 1; i<=NumeroN; i++){
        Soma = Soma + i/NumeroM;
        if(i != NumeroN) {
            printf ("%i/%.f + ", i, NumeroM);
        } else {
            printf ("%i/%.f = ", i, NumeroM);
        }
        NumeroM += 2;
    }
    printf("%f",Soma);
}

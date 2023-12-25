#include <stdio.h>

int main(){
    
    int NumeroLido=-1;
    int Centena, Dezena, Unidade;
    
    printf("Exercício 19 da Lista de Decisão");
    while(NumeroLido<=0 || NumeroLido>=1000){
        printf("\nInforme um número entre 0 e 1000: ");
        scanf("%i",&NumeroLido);
    }
    Centena = NumeroLido/100;
    Dezena = (NumeroLido-(Centena*100))/10;
    Unidade = NumeroLido-(Centena*100+Dezena*10);
    
    if (Centena >1){
        printf("%i Centenas",Centena);
    }
    if (Centena == 1){
        printf("%i Centena",Centena);
    }
    if (Dezena >1){
        if (Centena > 0){
            printf(", %i Dezenas ",Dezena);
        }
        else{
            printf("%i Dezenas ",Dezena);
        }
    }
    if (Dezena == 1){
        if (Centena > 0){
            printf(", %i Dezena",Dezena);
        }
        else{
            printf("%i Dezena",Dezena);
        }
    }
    if (Unidade >1){
        if(Centena == 0 && Dezena == 0){
            printf("%i Unidades", Unidade);
        }
        else{
            printf(" e %i Unidades",Unidade);
        }
    }
    if (Unidade == 1){
        if(Centena == 0 && Dezena == 0){
            printf("%i Unidade", Unidade);
        }
        else{
            printf(" e %i Unidade",Unidade);
        }
    }
}

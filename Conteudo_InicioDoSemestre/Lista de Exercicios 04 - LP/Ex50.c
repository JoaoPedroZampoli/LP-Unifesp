#include <stdio.h>

int main(){
    int NumeroInformado;
    float NumeroDividido, NumeroFinal;
    
    do{
    printf("Informe um número inteiro maior que 0: ");
    scanf("%i", &NumeroInformado);
    }while(NumeroInformado<=0);
    for(float i = 1; i <= NumeroInformado; i++){
        NumeroDividido = 1/i;
        NumeroFinal += NumeroDividido;
    }
    printf("%.2f",NumeroFinal);

}

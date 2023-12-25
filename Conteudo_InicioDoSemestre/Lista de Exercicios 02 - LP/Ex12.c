#include <stdio.h>

int main(){
    int Numero, Resultado, i;

    printf("Gerador de Tabuada");
    printf("\nInforme um Número entre 0 e 10 para fazer a tabuada: ");
    scanf("%i", &Numero);
    while(Numero<0 || Numero>10){
        printf("\nValor Inválido, Informe um Número entre 0 e 10 para fazer a tabuada: ");
        scanf("%i", &Numero);
    }
    printf("Tabuada de %i:", Numero);
    for(i=1;i<=10;i++){
        Resultado = Numero*i;
        printf("\n%i X %i = %i", Numero, i, Resultado);
    }
    return 0;
}
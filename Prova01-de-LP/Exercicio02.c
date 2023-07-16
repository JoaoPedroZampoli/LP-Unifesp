#include <stdio.h>

int main(){
    float N1=-1, N2=-1, Media;

    printf("Segundo Exercício - Cálculo de Notas\n");
    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&N1);
    }while(N1<0 || N1>10);
    do{
        printf("\nDigite a segunda nota: ");
        scanf("%f",&N2);
    }while(N2<0 || N2>10);

    Media = (N1+N2)/2;

    if(Media==10){
        printf("Aprovado com Distinção");
    }
    else{
        if(Media>=7 && Media<10){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");
        }
    }
}
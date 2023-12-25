#include <stdio.h>

int main(void){
    float Nota;
    while(Nota==0){
    printf("Insira uma nota: ");
    scanf("%f", &Nota);
    }
    printf("A nota é  : %f", Nota);
}
#include <stdio.h>

int main()
{
    float Nota=-1;

    while(Nota<0 || Nota>10){
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &Nota);
    }
    printf("A nota é: %f", Nota);
}

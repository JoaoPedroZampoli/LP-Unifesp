#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N1, N2, N3;

    printf("Primeira Questão - Qual dos três números é o maior?\n");
    printf("Digite o primeiro número: ");
    scanf("%i",&N1);
    printf("\nDigite o segundo número: ");
    scanf("%i",&N2);
    printf("\nDigite o terceiro número: ");
    scanf("%i",&N3);

    //Começo das comparações
    if(N1>=N2 && N1>=N3){
        if(N2>=N3){
            printf("%i >= %i >= %i",N1, N2, N3);
        }
        else{
            printf("%i >= %i >= %i",N1, N3, N2);
        }
    }
    if(N2>=N1 && N2>=N3){
        if(N1>=N3){
            printf("%i >= %i >= %i",N2, N1, N3);
        }
        else{
            printf("%i >= %i >= %i",N2, N3, N1);
        }
    }
    if(N3>=N1 && N3>=N2){
        if(N1>=N2){
            printf("%i >= %i >= %i",N3, N1, N2);
        }
        else{
            printf("%i >= %i >= %i",N3, N2, N1);
        }
    }
}
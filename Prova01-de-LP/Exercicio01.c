#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int N1, N2, N3;

    printf("Primeira Quest�o - Qual dos tr�s n�meros � o maior?\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%i",&N1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%i",&N2);
    printf("\nDigite o terceiro n�mero: ");
    scanf("%i",&N3);

    //Come�o das compara��es
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
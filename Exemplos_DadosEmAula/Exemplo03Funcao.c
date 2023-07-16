#include <stdio.h>
#include <string.h>
#include <locale.h>

int Palindromo(char[]);

int main(){
    char Palavra[40], PalavraInvertida[40];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Palavra: ");
    scanf("%s", Palavra);
    if(Palindromo(Palavra)){
        printf("\nÉ Palíndromo");
    }
    else{
        printf("\nNão é Palíndromo");
    }

    inverteString02(Palavra, PalavraInvertida);
    printf("\nPalavra Invertida: %s",PalavraInvertida);
    return 0;
}

int Palindromo(char Ponteiro[]){
    for(int i = 0; i < strlen(Ponteiro)/2; i++){
        if(Ponteiro[i]!=Ponteiro[strlen(Ponteiro)-1-i]){
            return 0;
        }
    }
    return 1;
}

void inverteString01(char Ponteiro[]){
    char Auxiliar;
    for(int i = 0; i < strlen(Ponteiro)/2; i++){
        Auxiliar = Ponteiro[i];
        Ponteiro[i] = Ponteiro[strlen(Ponteiro)-1-i];
        Ponteiro[strlen(Ponteiro)-1-i] = Auxiliar;
    }
}

void inverteString02(char Ponteiro[], char PonteiroI[]){
    for(int i = 0; i < strlen(Ponteiro); i++){
        PonteiroI[strlen(Ponteiro)-1-i] = Ponteiro[i];
    }
}
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char String[100];
    int i = 0, j = 0, TamanhoString = 0;
    char Comparacao;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 01 - Inversão de String\n");
    printf("Escreva para a String: ");
    fgets(String, sizeof(String), stdin);
    TamanhoString = strlen(String);

    for(i = 0; i < TamanhoString/2; i++){
        Comparacao = String[i];
        String[i] = String[TamanhoString - i - 1];
        String[TamanhoString - i - 1] = Comparacao;
    }

    printf("String Invertida: %s", String);
}
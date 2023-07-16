#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char StringA[500], StringB[200], StringC[200], StringFinal[1000];
    int i = 0, j = 0, k = 0, FraseOriginal = 0, Mudanca = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 01 - Slide 18 (Strings)\n");
    printf("Escreva para a 1º String: ");
    fgets(StringA, sizeof(StringA), stdin);
    printf("\nEscreva para a 2º String: ");
    fgets(StringB, sizeof(StringB), stdin);
    printf("\nEscreva para a 3º String: ");
    fgets(StringC, sizeof(StringC), stdin);

    StringA[strcspn(StringA, "\n")] = '\0';
    StringB[strcspn(StringB, "\n")] = '\0';
    StringC[strcspn(StringC, "\n")] = '\0';
    
    while(StringA[i] != '\0'){
        FraseOriginal = 0;
        if(StringA[i] == StringB[0]){
            j = 0;
            k = i;
            while(StringA[k] == StringB[j] && StringB[j] != '\0'){
                k++;
                j++;
            }
            if(StringB[j] == '\0') {
                strcat(StringFinal, StringC);
                FraseOriginal = 1;
                i = k - 1;
            }
        }
        if (FraseOriginal==0) {
            char Temporario[2] = {StringA[i], '\0'};
            strcat(StringFinal, Temporario);
        }
        i++;
    }

    printf("String Final: %s\n", StringFinal);

}
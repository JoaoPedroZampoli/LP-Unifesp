#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char StringA[200], StringB[200], StringC[400];
    int i = 0, counterA = 0, counterB = 0, counterC = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 02, Slide 17 - Manipulação 3 Strings\n");
    printf("Escreva a Primeira String: ");
    fgets(StringA, sizeof(StringA), stdin);
    printf("\nAgora, Escreva a Segunda String: ");
    fgets(StringB, sizeof(StringB), stdin);
    // if(strlen(StringA)>strlen(StringB)){
    //     i = strlen(StringA);
    // }
    // else if(strlen(StringA)<strlen(StringB)){
    //     i = strlen(StringB);
    // }
    // else{
    //     i = strlen(StringA);
    // }
    for(i; i<=strlen(StringA) || i<=strlen(StringB); i++){
        if(i<strlen(StringA)){
            if(StringA[counterB] == '\n'){
                continue;
            }
            else{
                StringC[counterC] = StringA[counterA];
                counterA++;
                counterC++;
            }
        }
        if(i<strlen(StringB)){
            if(StringB[counterB] == '\n'){
                continue;
            }
            else{
                StringC[counterC] = StringB[counterB];
                counterB++;
                counterC++;
            }
        }
    }
    StringC[counterC] = '\0';
    printf("Texto das duas Strings Unidas: %s", StringC);
}
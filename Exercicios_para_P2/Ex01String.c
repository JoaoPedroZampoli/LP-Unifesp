#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    char String[200];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício de LP - Primeira Letra Maiúscula\n");
    fgets(String, sizeof(String), stdin);
    if(String[0]>='a' && String[0]<='z'){
        String[0] = String[0]-32;
    }
    for(int i = 1; i<strlen(String); i++){
        if(String[i] == ' '){
            if(String[i+1]>='a' && String[i+1]<='z'){
                String[i+1] = String[i+1]-32;
            }
        }   
    }
    printf("\nCoisa armazenada: %s\n", String);
}
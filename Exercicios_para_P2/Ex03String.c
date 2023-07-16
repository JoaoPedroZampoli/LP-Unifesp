#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    char StringNome[5][50];
    int i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício do Slide 13 - Armazenamento de Nomes\n");
    for(i = 0; i < 5; i++){
        printf("\nEscreva o %iº Nome: ", i+1);
        fgets(StringNome[i], sizeof(StringNome[i]), stdin);
        StringNome[i][strlen(StringNome[i])-1] = '\0';
    }
    printf("\n\nOs nomes inseridos foram:");
    for(i = 0; i < 5; i++){
        printf("\n%iº: %s", i+1, StringNome[i]);
    }
}
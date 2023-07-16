#include <stdio.h>
#include <locale.h>

int strlen(char[]);
int strcmp(char[], char[]);
void strcpy(char[], char[]);

int main(){
    char StringA[50], StringB[50], StringC[100];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 35 - Funções de String");
    printf("\nDigite para a String A: ");
    fgets(StringA, sizeof(StringA), stdin);
    printf("\nDigite para a String B: ");
    fgets(StringB, sizeof(StringB), stdin);
    printf("\n\nComprimento da String A: %i", strlen(StringA));
    if(strcmp(StringA, StringB)==1){
        printf("\nComparação entre Strings: Equivalentes");    
    }
    else{
        printf("\nComparação entre Strings: Não Equivalentes");
    }
    strcpy(StringC, StringA);
    printf("\nString C: %s", StringC);
}

int strlen(char String[]){
    int Tamanho = 0;
    while(String[Tamanho] != '\0'){
        Tamanho++;
    }
    return Tamanho;
}

int strcmp(char StringA[], char StringB[]){
    int Comparador = 0;
    while(StringA[Comparador] == StringB[Comparador]){
        if(StringA[Comparador] == '\0'){
            return 1;
        }
        Comparador++;
    }
    return 0;
}

void strcpy(char Origem[], char Cola[]){
    int Copiador = 0;
    while(Origem[Copiador] != '\0'){
        if(Origem[Copiador] != '\n'){
            Cola[Copiador] = Origem[Copiador];
        }
        Copiador++;
    }
    Cola[Copiador] = '\0';
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float Soma=0, Media, VetorNotas[4];

    printf("3� Exerc�cio da Lista de Vetores e Matriz\n\n");
    for(int i = 0; i<4; i++){
        printf("Digite a Nota da %i� Prova : ", i+1);
        scanf("%f", &VetorNotas[i]);
        Soma += VetorNotas[i];
    }
    Media = Soma/4;
    for(int i = 0; i < 4; i++){
        printf("\nNota da %i� Prova = %.2f", i+1, VetorNotas[i]);
    }
    printf("\n\nM�dia = %.2f", Media);

}
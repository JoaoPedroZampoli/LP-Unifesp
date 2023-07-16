#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float Soma=0, Media, VetorNotas[4];

    printf("3º Exercício da Lista de Vetores e Matriz\n\n");
    for(int i = 0; i<4; i++){
        printf("Digite a Nota da %iº Prova : ", i+1);
        scanf("%f", &VetorNotas[i]);
        Soma += VetorNotas[i];
    }
    Media = Soma/4;
    for(int i = 0; i < 4; i++){
        printf("\nNota da %iº Prova = %.2f", i+1, VetorNotas[i]);
    }
    printf("\n\nMédia = %.2f", Media);

}
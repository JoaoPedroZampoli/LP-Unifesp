#include <stdio.h>
#include <locale.h>

int main(){
    float VetorNotas[20], Media=0;
    int i=0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 79 - Média de Notas\n\n");
    for(i=0; i<20; i++){
        printf("Digite a %iº Nota: ", i+1);
        scanf("%f", &VetorNotas[i]);
        Media += VetorNotas[i];
    }
    printf("\nA soma das notas resultou em: %.2f\n", Media);
    Media /= 20;
    printf("A Média da sala foi: %.2f", Media);
}
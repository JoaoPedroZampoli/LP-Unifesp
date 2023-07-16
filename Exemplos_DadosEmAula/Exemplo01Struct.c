#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Aluno{
    char Nome[40];
    int RA;
    int Frequencia;
    float Notas[3];
};

int main(){    
    struct Aluno AlunoLP;
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Exemplo 01 - Informa��es de Aluno\n");
    printf("Escreva o Nome: ");
    fgets(AlunoLP.Nome, sizeof(AlunoLP.Nome), stdin);
    AlunoLP.Nome[strlen(AlunoLP.Nome)-1] = '\0';
    printf("\nDigite o RA do Aluno: ");
    scanf("%i", &AlunoLP.RA);
    printf("\nDigite a Frequ�ncia do Aluno: ");
    scanf("%i", &AlunoLP.Frequencia);
    printf("\nAgora, digite as Notas do Aluno:\n");
    for(int i = 0; i < 3; i++){
        printf("Digite a %i� Nota: ", i+1);
        scanf("%f", &AlunoLP.Notas[i]);
    }

    printf("\nDados Inseridos:");
    printf("\nNome: %s", AlunoLP.Nome);
    printf("\nRA: %i", AlunoLP.RA);
    printf("\nFrequ�ncia: %i", AlunoLP.Frequencia);
    for(int i = 0; i < 3; i++){
        printf("\n%i� Nota: %.2f", i+1, AlunoLP.Notas[i]);
    }
}
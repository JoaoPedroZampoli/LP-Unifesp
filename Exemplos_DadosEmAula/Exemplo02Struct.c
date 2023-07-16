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
    struct Aluno TurmaLP[3];
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    for(int i = 0; i < 3; i++){
        printf("Exemplo 01 - Informações de Aluno\n");
        printf("Escreva o Nome: ");
        fgets(TurmaLP[i].Nome, sizeof(TurmaLP[i].Nome), stdin);
        TurmaLP[i].Nome[strlen(TurmaLP[i].Nome)-1] = '\0';
        printf("\nDigite o RA do Aluno: ");
        scanf("%i", &TurmaLP[i].RA);
        printf("\nDigite a Frequência do Aluno: ");
        scanf("%i", &TurmaLP[i].Frequencia);
        printf("\nAgora, digite as Notas do Aluno:\n");
        for(int j = 0; j < 3; j++){
            do{
                printf("Digite a %i° Nota: ", j+1);
                scanf("%f", &TurmaLP[i].Notas[j]);
                if(TurmaLP[i].Notas[j]<0 || TurmaLP[i].Notas[j]>10){
                    printf("\nValor Inválido!");
                }
            }while(TurmaLP[i].Notas[j]<0 || TurmaLP[i].Notas[j]>10);
        }
        getchar();
    }
    
    printf("\nTurma de LP:");
    for(int i = 0; i < 3; i++){
        printf("\nDados Inseridos:");
        printf("\nNome: %s", TurmaLP[i].Nome);
        printf("\nRA: %i", TurmaLP[i].RA);
        printf("\nFrequência: %i", TurmaLP[i].Frequencia);
        for(int j = 0; j < 3; j++){
            printf("\n%iº Nota: %2.f", j+1, TurmaLP[i].Notas[j]);
        }
    }
    
}
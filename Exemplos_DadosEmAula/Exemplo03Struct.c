#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 50

struct Aluno{
    char Nome[40];
    int RA;
    int Frequencia;
    float Notas[3];
};

//Declaração de Funções
void ImprimirMenu();
int BuscaAluno(struct Aluno[], int, int);
void InserirAluno(struct Aluno[], int, int);
void ExibirAluno(struct Aluno[], int, int);
void ExibirTurma(struct Aluno[], int);
void RemoverAluno(struct Aluno[], int, int);

int main(){
    struct Aluno TurmaLP[MAX];
    int Opcao = 0, NumeroAluno = 0;
    int RA, Get;

    setlocale(LC_ALL, "Portuguese_Brazil");
    while(Opcao!=5){
        ImprimirMenu();
        scanf("%i", &Opcao);
        switch (Opcao){
            case 1:
                //Inserção de Aluno em Turma
                if(NumeroAluno == MAX){
                    printf("\nTurma Cheia\n");
                }
                else{
                    printf("Digite o RA do Novo Aluno: ");
                    scanf("%i", &RA);
                    if(BuscaAluno(TurmaLP, NumeroAluno, RA)==-1){
                        InserirAluno(TurmaLP, NumeroAluno, RA);
                        NumeroAluno++;
                        printf("\nAluno Inserido com Sucesso!\n");
                    }
                    else{
                        printf("\nAluno já matriculado\n");
                    }
                }
            break;
            case 2:
                //Consulta de Aluno por RA
                if(NumeroAluno == 0){
                    printf("\nTurma Vazia\n");
                }
                else{
                    printf("\nDigite o RA do Aluno: ");
                    scanf("%i", &RA);
                    if(BuscaAluno(TurmaLP, NumeroAluno, RA)==-1){
                        printf("\nAluno Inexistente\n");
                    }
                    else{
                        ExibirAluno(TurmaLP, NumeroAluno, RA);
                    }
                }
            break;
            case 3:
                //Listagem de Turma
                if(NumeroAluno==0){
                    printf("\nTurma Vazia\n");
                }
                else{
                    ExibirTurma(TurmaLP, NumeroAluno);
                }
            break;
            case 4:
                //Remoção de Aluno
                if(NumeroAluno == 0){
                    printf("\nTurma Vazia\n");
                }
                else{
                    printf("\nDigite o RA: ");
                    scanf("%i", &RA);
                    Get = BuscaAluno(TurmaLP, NumeroAluno, RA);
                    if(Get != -1){
                        ExibirListaAluno(TurmaLP, NumeroAluno, RA);
                        printf("\nRemovendo Aluno\n");
                        RemoverAluno(TurmaLP, NumeroAluno, Get);
                        NumeroAluno--;
                    }
                    else{
                        printf("\nAluno não Listado na Turma\n");
                    }
                }
            break;
            case 5:
                //Saída do Programa
                printf("\nFim!\n");
            break;
            default:
                printf("\nOpção Inválida, Digite Novamente\n");
            break;
        }
    }
}

void ImprimirMenu(){
    printf("\nMenu:");
    printf("\n1 - Inserir Aluno");
    printf("\n2 - Consultar Aluno por RA");
    printf("\n3 - Listar Turma");
    printf("\n4 - Remover Aluno");
    printf("\n5 - Sair");
    printf("\n\nOpção: ");
}

int BuscaAluno(struct Aluno TurmaLP[], int NumeroAluno, int RA){
    for(int i = 0; i < NumeroAluno; i++){
        if(TurmaLP[i].RA==RA){
            return i;
        }
    }
    return -1;
}

void InserirAluno(struct Aluno TurmaLP[], int NumeroAluno, int RA){
    getchar();
    printf("\nNome do Aluno: ");
    fgets(TurmaLP[NumeroAluno].Nome, sizeof(TurmaLP[NumeroAluno].Nome), stdin);
    TurmaLP[NumeroAluno].Nome[strlen(TurmaLP[NumeroAluno].Nome)-1] = '\0';
    TurmaLP[NumeroAluno].RA = RA;
    printf("\nFrequência: ");
    scanf("%i", &TurmaLP[NumeroAluno].Frequencia);
    for(int i = 0; i < 3; i++){
        printf("Digite a %iº Nota: ", i+1);
        scanf("%f", &TurmaLP[NumeroAluno].Notas[i]);
    }
}

void ExibirAluno(struct Aluno TurmaLP[], int NumeroAluno, int RA){
    for(int i = 0; i < NumeroAluno; i++){
        if(TurmaLP[i].RA==RA){
            printf("\n\nDados do Aluno:");
            printf("\nNome: %s", TurmaLP[i].Nome);
            printf("\nRA: %i", TurmaLP[i].RA);
            printf("\nFrequência: %i\n", TurmaLP[i].Frequencia);
            for(int j = 0; j < 3; j++){
                printf("Nota %i: %.2f\n", j+1, TurmaLP[i].Notas[j]);
            }
            break; 
        }
    }
}

void ExibirListaAluno(struct Aluno TurmaLP[], int Get){
    printf("\n\nDados do Aluno:");
    printf("\nNome: %s", TurmaLP[Get].Nome);
    printf("\nRA: %i", TurmaLP[Get].RA);
    printf("\nFrequência: %i\n", TurmaLP[Get].Frequencia);
    for(int j = 0; j < 3; j++){
        printf("Nota %i: %.2f\n", j+1, TurmaLP[Get].Notas[j]);
    }   
}

void ExibirTurma(struct Aluno TurmaLP[], int NumeroAluno){
    for(int i = 0; i < NumeroAluno; i++){
        printf("\n");
        ExibirListaAluno(TurmaLP, i);
    }
}

void RemoverAluno(struct Aluno TurmaLP[], int NumeroAluno, int Get){
    for(int i = Get; i < NumeroAluno; i++){
        TurmaLP[i] = TurmaLP[i+1];
    }
}

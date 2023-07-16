#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    float Salario=0, SalarioAtualizado = 0;
    char StringCargo[50];

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exercício 3 - Slide 15 (Strings)\n");
    printf("Cálculo de Aumento de Salário\n");
    printf("Digite o Salário do funcionário: R$ ");
    scanf("%f", &Salario);
    getchar();
    printf("\nAgora, digite o cargo do funcionário: ");
    scanf("%s", StringCargo);
    //fgets(StringCargo, sizeof(StringCargo), stdin);
    if(strcmp(StringCargo, "Gerente") == 0){
        SalarioAtualizado = Salario*1.10;
    }
    else if(strcmp(StringCargo, "Engenheiro") == 0){
        SalarioAtualizado = Salario*1.20;
    }
    else if(strcmp(StringCargo, "Auxiliar") == 0){
        SalarioAtualizado = Salario*1.30;
    }
    else{
        SalarioAtualizado = Salario*1.40;
    }
    printf("\n Salário Antigo: R$ %.2f", Salario);
    printf("\n Salário Atualizado: R$ %.2f", SalarioAtualizado);
    printf("\n Diferença entre Salários: R$ %.2f", SalarioAtualizado-Salario);
}
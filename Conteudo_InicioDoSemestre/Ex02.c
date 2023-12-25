#include <stdio.h>

int main(){
    int Idade;
    float Salario;
    char Sexo, Estado_Civil;

    printf("Digite a sua idade: ");
    scanf("%i", &Idade);
    if(Idade<0 || Idade>150){
        do{
            printf("\nIdade Inválida.  Digite novamente:");
            scanf("%i", &Idade); 
        }while(Idade<0 || Idade>150);
    }
    printf("\nAgora, digite o seu Salário: R$ ");
    scanf("%f", &Salario);
    if(Salario<=0){
        do{
            printf("\nSalário Inválido.  Digite novamente: R$ ");
            scanf("%f", &Salario);
        }while(Salario<=0);
    }
    printf("\nDigite o seu Sexo: ");
    scanf("%c",&Sexo);
    if(Sexo != "f" || Sexo != "m"){
        do{
            printf("\nDigite o seu Sexo: ");
            scanf("%c",&Sexo);
        }while(Sexo != "f" || Sexo != "m");
    }
    printf("\nDigite o seu Estado Civil: ");
    scanf("%c",&Estado_Civil);
    if(Estado_Civil != "s" || Estado_Civil != "c" || Estado_Civil != "v" || Estado_Civil != "d"){
        do{
            printf("\nDigite o seu Estado Civil: ");
            scanf("%c",&Estado_Civil);
        }while(Estado_Civil != "s" || Estado_Civil != "c" || Estado_Civil != "v" || Estado_Civil != "d");
    }
    printf("\nSua Idade é de: %i", Idade);
    printf("\nSeu salário é de: R$ %.2f", Salario);
    printf("\nSeu Sexo é: %c", Sexo);
    printf("\nSeu Estado Civil é: %c", Estado_Civil);

    return 0;
}   
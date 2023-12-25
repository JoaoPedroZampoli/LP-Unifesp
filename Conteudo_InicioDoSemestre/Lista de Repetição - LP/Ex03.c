#include <stdio.h>
#include <string.h>

int main(){
    int Idade=-10;
    float Salario=-1;
    char Sexo, Estado_Civil, Nome[70];

    printf("Exercício 03 - LP");
    while(strlen(Nome)<3){
        printf("\nDigite o seu Nome: ");
        scanf("%s", Nome);
    }
    while(Idade<0 || Idade>150){
        printf("\nDigite sua Idade: ");
        scanf("%i",&Idade);
    }
    while(Salario<0){
        printf("Digite seu Salário: R$ ");
        scanf("%f", &Salario);
    }
    /*while(Sexo=="" || (Sexo!="F" || Sexo != "M" || Sexo != "f" || Sexo != "m")){
        printf("Digite o seu Sexo: ");
        scanf("%c",&Sexo);
    }*/
    

    
}
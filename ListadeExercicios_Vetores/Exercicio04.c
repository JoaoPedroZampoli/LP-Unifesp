#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char VetorChar[10];
    int NumeroConsoantes = 0, Primeiro = 0;

    printf("4� Exerc�cio - Lista de Vetores\n");
    for(int i = 0; i<10; i++){
        printf("Digite a %i� Letra: ",i+1);
        scanf(" %c",&VetorChar[i]);
        if(VetorChar[i] != 'A' && VetorChar[i] != 'a' && VetorChar[i] != 'E' && VetorChar[i] != 'e' && VetorChar[i] != 'I' && VetorChar[i] != 'i' && VetorChar[i] != 'O' && VetorChar[i] != 'o' && VetorChar[i] != 'U' && VetorChar[i] != 'u'){
            NumeroConsoantes++;
        }
    }
    printf("\nO N�mero de Consoantes entre as 10 letras informadas � de: %i", NumeroConsoantes);
    printf("\nJ� as Consoantes Digitadas foram:");
    for(int i=0; i<10; i++){
        if(VetorChar[i] != 'A' && VetorChar[i] != 'a' && VetorChar[i] != 'E' && VetorChar[i] != 'e' && VetorChar[i] != 'I' && VetorChar[i] != 'i' && VetorChar[i] != 'O' && VetorChar[i] != 'o' && VetorChar[i] != 'U' && VetorChar[i] != 'u'){
            if(Primeiro==0){
                printf(" %c",VetorChar[i]);
            }
            else{
                printf(", %c",VetorChar[i]);
            }
            Primeiro=1;
        }
    }

}
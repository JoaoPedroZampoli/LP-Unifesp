#include <stdio.h>
#include <locale.h>

int main(){
    float VetorTemperatura[365], MenorTemperatura = 0, MaiorTemperatura = 0, MediaAnual = 0, DiasInferior = 0;
    int i = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exerc�cio 85 - Manipula��o de Vetores com Temperaturas\n");
    for(i = 0; i < 365; i++){
        printf("Digite a Temperatura M�dia do %i� Dia do Ano: ", i+1);
        scanf("%f", &VetorTemperatura[i]);
        MediaAnual += VetorTemperatura[i];
        if(i==0){
            MaiorTemperatura = MenorTemperatura = VetorTemperatura[i];
        }
        else{
            if(VetorTemperatura[i] > MaiorTemperatura){
                MaiorTemperatura = VetorTemperatura[i];
            }else{
                if(VetorTemperatura[i] < MenorTemperatura){
                    MenorTemperatura = VetorTemperatura[i];
                }
            }
        }
    }
    MediaAnual /= 365;
    for(i = 0; i < 365; i++){
        if(VetorTemperatura[i] < MediaAnual){
            DiasInferior++;
        }
    }
    printf("\nA Menor Temperatura foi de: %.2f", MenorTemperatura);
    printf("\nA Maior Temperatura foi de: %.2f", MaiorTemperatura);
    printf("\nA Temperatura M�dia Anual foi de: %.2f", MediaAnual);
    printf("\nA Quantidade de Dias no Ano cuja a Temperatura foi Inferior a M�dia � de: %.0f", DiasInferior);
}
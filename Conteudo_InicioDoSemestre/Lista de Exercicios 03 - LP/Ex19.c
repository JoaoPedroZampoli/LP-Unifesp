#include <stdio.h>

int main() {
    int Numero_Conjuntos = -10, Menor = 0, Maior = 0, Soma = 0, Numero;

    while (Numero_Conjuntos < 0 || Numero_Conjuntos > 1000) {
        printf("Digite o número de números dentro do conjunto: ");
        scanf("%i", &Numero_Conjuntos);
    }

    if (Numero_Conjuntos == 0) {
        printf("\nNenhum número no conjunto, conjunto vazio Ø");
    }

    if (Numero_Conjuntos > 0) {
        for (int i = 1; i <= Numero_Conjuntos; i++) {
            printf("\nDigite o %iº número que faz parte do conjunto: ", i);
            scanf("%i", &Numero);
            while (Numero < 0 || Numero > 1000) {
                printf("\nNúmero Inválido, Digite novamente: ");
                scanf("%i", &Numero);
            }
            if (i == 1) {
                Menor = Maior = Numero;
            } else {
                if (Numero < Menor) {
                    Menor = Numero;
                }
                if (Numero > Maior) {
                    Maior = Numero;
                }
            }
            Soma += Numero;
        }
        printf("\nO menor número é: %i", Menor);
        printf("\nO maior número é: %i", Maior);
        printf("\nA soma dos números é de: %i", Soma);
    }
}

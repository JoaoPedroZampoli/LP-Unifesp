#include <stdio.h>
#include <locale.h>

int Fibonacci(int);

int main(){
    int N;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exemplo de Recurs�o: \n");
    printf("Insira um n�mero: ");
    scanf("%i", &N);
    N = Fibonacci(N);
    printf("\nN�mero = %i", N);

}

int Fibonacci(int N){
    if(N==1 || N==2){
        return 1;
    }
    return Fibonacci(N-1)+Fibonacci(N-2);
}
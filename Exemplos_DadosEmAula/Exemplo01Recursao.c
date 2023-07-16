#include <stdio.h>
#include <locale.h>

int Fibonacci(int);

int main(){
    int N;

    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Exemplo de Recursão: \n");
    printf("Insira um número: ");
    scanf("%i", &N);
    N = Fibonacci(N);
    printf("\nNúmero = %i", N);

}

int Fibonacci(int N){
    if(N==1 || N==2){
        return 1;
    }
    return Fibonacci(N-1)+Fibonacci(N-2);
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Testando Acentuações.  E é só isso mesmo! :)");
}
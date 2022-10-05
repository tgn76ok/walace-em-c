#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero =0 ;

    printf("Informe o valor de um número: ");

    scanf("%d",&numero);

    printf("\nO número informado foi %d",numero);

}

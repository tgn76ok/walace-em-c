#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero =0 ;

    printf("Informe o valor de um n�mero: ");

    scanf("%d",&numero);

    printf("\nO n�mero informado foi %d",numero);

}

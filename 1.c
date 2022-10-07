#include <stdio.h>
#include <locale.h>

int main(){
    /*Utilizamos a função setlocale() para fazer a adaptação do programa para o idioma desejado.*/
    setlocale(LC_ALL, "Portuguese");
   /*inicializando as variáveis*/
    int numero =0 ;
   /*interação com o usuário*/
    printf("Informe o valor de um número: ");
   /*armazenado o valor digitador na variável número*/
    scanf("%d",&numero);
    /*apresentação dos resultados*/
    printf("\nO número informado foi %d",numero);

}

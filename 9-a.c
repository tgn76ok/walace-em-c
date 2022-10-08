#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
   /*interação com o usuário*/
    char nome[200];
       /*interação com o usuário*/
    printf("Digite o seu nome: ");
    gets(nome);
     /*apresentação dos resultados*/
    printf("o seu nome %s",nome);
}

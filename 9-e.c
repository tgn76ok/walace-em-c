#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[200];

    printf("Digite o seu nome: ");
    gets(nome);

    for(int i = 0 ; nome[i] != '\0'; i++){
            if(nome[i]==' '){
                printf("\n");
                i++;
            }
            printf("%c",nome[i]);
        }




}

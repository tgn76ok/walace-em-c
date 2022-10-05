#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[200];

    printf("Digite o seu nome: ");
    gets(nome);

    for(int i = strlen(nome) ; i >= 0; i--){
        printf("%c",nome[i]);
    }
}

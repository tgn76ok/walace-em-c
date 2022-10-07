#include <stdio.h>
#include <locale.h>


int main(){
    /*inicializando as variáveis*/
    int Tamanho;
       /*interação com o usuário*/
    printf("Qual o tamanho do quadrado? ");
    scanf("%d",&Tamanho);

     /*primeiro laço de repetição fica responsável pela linha, e a segunda pela coluna*/
    for(int i = 0 ; i < Tamanho; i++){
            printf("\n\n\t");
        for(int i = 0 ; i < Tamanho; i++){
            printf("X\t");
        }
    }


}

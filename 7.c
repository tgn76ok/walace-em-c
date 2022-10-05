#include <stdio.h>
#include <locale.h>


int main(){
    int Tamanho;
    printf("Qual o tamanho do quadrado? ");
    scanf("%d",&Tamanho);


    for(int i = 0 ; i < Tamanho; i++){
            printf("\n\n\t");
        for(int i = 0 ; i < Tamanho; i++){
            printf("X\t");
        }
    }


}

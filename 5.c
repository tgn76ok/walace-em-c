#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[4];
    int resl,resl2;

    for(int i = 0; i <4; i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }


    resl = num[0] * num[2];
    resl2 = num[1] + num[3];

    printf("Pultiplica�ao primeiro n�mero com o terceiro n�mero lido, o relsutado � %d\n",resl);
    printf("Soma do segundo n�mero com o quarto n�mero, o relsutado � %d",resl2);

}

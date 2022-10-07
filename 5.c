#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    /*inicializando as variáveis*/
    int num[4];
    int resl,resl2;
    
    /*um laço de repetiçao que pede para digitar 4 numeros consecutivamente*/

    for(int i = 0; i <4; i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }

      /*realizando os calculos*/
    resl = num[0] * num[2];
    resl2 = num[1] + num[3];
    /*desmostração na tela dos resultados*/
    printf("Pultiplicaçao primeiro número com o terceiro número lido, o relsutado é %d\n",resl);
    printf("Soma do segundo número com o quarto número, o relsutado é %d",resl2);

}

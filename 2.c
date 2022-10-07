
#include <stdio.h>
#include <locale.h>
/*define uma constante onde recebe 10 como valor*/
#define TamanhoArry 10

/*inicializar uma função, com o objetivo de fazer a varredura de um arry e verificar quantidade de vezes um
número se repete */

int count(int num[],int x){
    int soma=0;
    for(int i = 0;i<TamanhoArry;i++ ){
        if (num[i]==x){
             soma ++;
        }
    }
return soma;
}

int main(void){
    /*inicializando as variáveis*/
     setlocale(LC_ALL, "Portuguese");
     int resl,resl2;
     int num[TamanhoArry];
     int maxi,menos,numeros;
    /*precessando varrendo o vetor e verificando qual desse valores é o maior e o menor*/
     for (int i = 0; i<TamanhoArry ; ++i){

        printf("digite o número: ");
        scanf("%d",&num[i]);
        fflush(stdin);
/*-----------------------------------------------------------------*/
        if(i == 0){
            menos =num[0];
            maxi = num[0];

/*-----------------------------------------------------------------*/
        }else if( maxi < num[i]){
            maxi=  num[i];
        }
        if(menos > num[i]){
            menos = num[i];

        }
     }
    
    /*desmostração na tela dos resultados*/

     printf("Qual o número voce quer pesquisar nesse vetor??\n>> ");
     scanf("%d",&numeros);


     resl=count(num,3);
     resl2 = count(num,numeros);
     printf("o número 3 se repete essa quantidade de vezes %d\n",resl);
     printf("o número %d se repete essa quantidade de vezes %d\n",numeros,resl);

     printf("O maior número e %d \n",maxi);
     printf("A menor número e %d",menos);


}


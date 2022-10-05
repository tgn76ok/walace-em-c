
#include <stdio.h>
#include <locale.h>
#define TamanhoArry 10
int count(int num[],int x){
    int soma=0;
    for(int i = 0;i<10;i++ ){
        if (num[i]==x){
             soma ++;
        }
    }
return soma;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
     int resl,resl2;
     int num[10];
     int maxi,menos,numeros;

     for (int i = 0; i<10 ; ++i){

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

     printf("Qual o número voce quer pesquisar nesse vetor??\n>> ");
     scanf("%d",&numeros);


     resl=count(num,3);
     resl2 = count(num,numeros);
     printf("o número 3 se repete essa quantidade de vezes %d\n",resl);
     printf("o número %d se repete essa quantidade de vezes %d\n",numeros,resl);

     printf("O maior número e %d \n",maxi);
     printf("A menor número e %d",menos);


}


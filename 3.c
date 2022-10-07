
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
     /*inicializando as variáveis*/
     int num[29];
     int maxi,menos,diamais=0;
     /* varrendo o vetor e verificando qual desse valores é o maior e o menor, e salvando os dias que esses valores aparece*/
     for (int i = 0; i<29; ++i){
    
        printf("no dia %d do mes de fevereiro, foram vendidos quantas refeiçoes: ",(i+1));
        scanf("%d",&num[i]);
         /*usamos para limpar o fluxo / buffer. */
        fflush(stdin);
/*-----------------------------------------------------------------*/
        if(i == 0){
            menos =num[0];
            maxi = num[0];

/*-----------------------------------------------------------------*/
        }else if( maxi < num[i]){
            maxi=  num[i];
            diamais = i;
        }
        if(menos > num[i]){
            menos = num[i];

        }
     }
    /*desmostração na tela dos resultados*/
     printf("O dia que teve mais vendas foi %d,nesse dia vendeu %d refeiçoes\n",(diamais+1),maxi);


}


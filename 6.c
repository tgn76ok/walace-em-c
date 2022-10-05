#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int candA=0,candB=0,candD=0,nulo=0,bran=0,ops;
    int eleit=0;
    while(1){
         eleit++;
         printf("/******************************************************|\n");
	     printf("/               Candidato A Digite 1                   |\n");
         printf("/                                                      |\n");
         printf("/               Candidato B Digite 2                   |\n");
   		 printf("/                                                      |\n");
	     printf("/               Candidato D Digite 3                   |\n");
		 printf("/                                                      |\n");
	     printf("/               voto em Branco Digite 4                |\n");
	     printf("/******************************************************/\n");
         printf("/******************************************************|\n");
         printf("/       Digite 99 para acabar o periodo de votação     |\n");
	     printf("/******************************************************/\n");


        printf(">>");
        scanf("%d",&ops);

        system("cls");

        if(ops == 99){
            break;
        }

        if(ops == 1){
            candA++;

        }else if(ops==2){
            candB++;


        }else if(ops == 3){
            candD++;

        }else if(ops == 4){
            bran++;

        }else{
            nulo++;

        }

    }
    printf("Quantidade de eleitores %d\n",eleit);
    printf("Quantidade de votos nulos %d\n",nulo);
    printf("Quantidade de votos em branco %d\n",bran);
    printf("Votos no candidato A são %d\nVotos no candidato B são %d\nVotos no candidato D são %d",candA,candB,candD);

}

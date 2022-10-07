#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    /*inicializando as variáveis*/
    int candA=0,candB=0,candD=0,nulo=0,bran=0,ops;
    int eleit=0;
	
    while(1){
	       /*interação com o usuário*/
         eleit++;
         printf("/******************************************************|\n");
	 printf("/          Para o candidato A Digite 1                 |\n");
         printf("/                                                      |\n");
         printf("/          Para o Candidato B Digite 2                 |\n");
   	 printf("/                                                      |\n");
	 printf("/          Para o Candidato D Digite 3                 |\n");
         printf("/                                                      |\n");
	 printf("/               voto em Branco Digite 4                |\n");
         printf("/******************************************************/\n");
         printf("/******************************************************|\n");
         printf("/       Digite 99 para acabar o periodo de votação     |\n");
	 printf("/******************************************************/\n");

	
        printf(">>");
        scanf("%d",&ops);

        system("cls");
	/*verificar os valor que usuario digititou*/
	switch (ops){
	case 99:
            break;

        case 1:
            candA++;
        case 2:
            candB++;
        case 3:
            candD++;

        case 4:
            bran++;

	default:
            nulo++;

        }

	
	}
        
    }
	/*desmostração na tela dos resultados*/
    printf("Quantidade de eleitores %d\n",eleit);
    printf("Quantidade de votos nulos %d\n",nulo);
    printf("Quantidade de votos em branco %d\n",bran);
    printf("Votos no candidato A são %d\nVotos no candidato B são %d\nVotos no candidato D são %d",candA,candB,candD);

}

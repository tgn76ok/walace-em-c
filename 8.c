#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num,num2;
    int preco;



        printf("Digite um o preço do produto: ");
        scanf("%d",&num);

        printf("Digite a venda média mensal do produto: ");
        scanf("%d",&num2);

        if(num<30 && num2<500){
            preco = num * 1.1;
            printf("o novo preço do produto é %d\n",preco);

        }else if( (80 > num) && (num >=30) && (500 <= num2 <= 1200)){
            preco = num * 1.2;
            printf("o novo preço do produto é %d\n",preco);

        }else if(num2 >= 1200 &&num >=80 ){
            preco = num -( num*0.2);
            printf("o novo preço do produto é %d\n",preco);

        }else{
            printf("Nao encaixa na tabela");

        }


}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cart,c=1,multas,i,maior=0,maiorC;
	float soma,valM,tot;
	do{
		soma = 0;
		printf("Digite sua carteira de motorista: ");
		scanf("%d",&cart);
		if(cart != 0){
			printf("Digite o numero de multas: ");
			scanf("%d",&multas);
			if(multas > maior){
				maior = multas;
				maiorC = cart;
			}
			for(i=0;i<multas;i++){
				printf("Digite o valor da multa: ");
				scanf("%f",&valM);
				soma = soma + valM;
				
			}
			tot = tot + soma;
			printf("Total da sua divida: %.2f\n",soma);
			
		}else{
			c=0;
		}
	}while(c!=0);
	printf("Total de dívidas: %.2f\n",tot);
	printf("Carteira com maior número de multas: %d\n",maiorC);
	return 0;
}

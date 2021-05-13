#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero_consumidor,a = 1,op;
	float qtd=0,s1=0,s2=0,s3=0,op1=0,op2=0,op3=0;
	float custo=0;
	while(a != 0){
		printf("Digite o numero do consumidor: ");
		scanf("%d",&numero_consumidor);
		if(numero_consumidor != 0){
			printf("Digite a quantidade de Kwh: ");
			scanf("%f",&qtd);
			printf("Tabela de código do local\n");
			printf("1 - Residencial\n");
			printf("2 - Comercial\n");
			printf("3 - Industrial\n");
			printf("Digite a opção de local: ");
			scanf("%d",&op);
			switch(op){
				case 1:
					custo = qtd*0.3;
					printf("Custo total é de: %.2f\n",custo);
					printf("\n\n");
					op1+=1;
					s1+=custo;
					break;
				case 2:
					custo = qtd*0.5;
					printf("Custo total é de: %.2f\n",custo);
					printf("\n\n");
					op2+=1;
					s2+=custo;
					break;
				case 3:
					custo = qtd*0.7;
					printf("Custo total é de: %.2f\n",custo);
					printf("\n\n");
					op3+=1;
					s3+=custo;
					break;
				default:
					printf("Opção Inválida!");
					break;
			}
		}else{
			a = 0;
		}
	}
	if (qtd != 0){
    	printf("\nO total de consumo residencial é de %.2f\n",s1);
		printf("O total de consumo comercial é de %.2f\n",s2);
		printf("O total de consumo industrial é de %.2f\n",s3);
		printf("A média de consumo residencial é de %.2f\n",(s1/op1));
		printf("A média de consumo comercial é de %.2f\n",(s2/op2));
	}
}

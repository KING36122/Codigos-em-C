#include<stdio.h>
int main(){
	float num1,num2;
	int op;
	printf("Digite o numero: ");
	scanf("%f",&num1);
	printf("Digite o numero: ");
	scanf("%f",&num2);
	printf("\n");
	printf("---MENU---\n");
	printf("1 - SOMA\n");
	printf("2 - SUBTRACAO\n");
	printf("3 - MULTIPLICACAO\n");
	printf("4 - DIVISAO\n\n");
	printf("Digite a sua opcao: ");
	scanf("%d",&op);
	switch(op){
		case(1):
			printf("A soma de %.2f + %.2f é %.2f",num1,num2,num1+num2);
			break;
		case(2):
			printf("A subtracao de %.2f - %.2f é %.2f",num1,num2,num1-num2);
			break;
		case(3):
			printf("A multiplicacao de %.2f * %.2f é %.2f",num1,num2,num1*num2);
			break;
		case(4):
			if(num2 == 0){
				printf("Numero igual a zero");
			}else{
				printf("A divisao de %.2f por %.2f é %.2f",num1,num2,num1/num2);
				break;
			}
		default:
			printf("Invalido!");	
	}
}

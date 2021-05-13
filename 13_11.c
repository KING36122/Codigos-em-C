#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario=1,media=0,somaS=0,m_salario=0,somaF=0,cS=0;
	int num=0,c=0;
	while(salario!=0){
		printf("Digite seu salário: ");
		scanf("%f",&salario);
		if(salario!=0 && salario > 0){
			printf("Digite o número de filhos: ");
			scanf("%d",&num);
			if(num>0){
				somaS+=salario;
				somaF+=num;
				c+=1;
				if(salario>m_salario){
					m_salario=salario;
				}
			if(salario<=500){
				cS+=1;
			}
			}
		}
	}if(salario !=0){
		printf("A média dos salários é de R$%.2f",somaS/c);
		printf("\nA média do número de filhos é de %.2f por família",somaF/c);
		printf("\nO maior salário é de R$%.2f",m_salario);
		printf("\nO percentual de pessoas que possuem salário menor que R$500.00 é de %.0f porcento.",(cS/c)*100);
	}else{
		printf("Você digitou 0!");
		printf("\nsaindo...");
	}
}
	

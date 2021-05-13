#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int volta;
	float t;
	printf("Digite o número da volta: ");
		scanf("%d",&volta);
	if(volta != 0){
		printf("Digite o tempo dado na volta: ");
		scanf("%f",&t);
		printf("\n\n");
		}
	float menor = t,soma,c=1;
	int melhorvolta = volta;
	while (volta != 0){
		printf("Digite o número da volta: ");
		scanf("%d",&volta);
		if(volta != 0){
			printf("Digite o tempo dado na volta: ");
			scanf("%f",&t);
			soma+=t;
			c+=1;
			printf("\n\n");
			if(t<menor){
				menor = t;
				melhorvolta = volta;
			}
		}
	}
printf("\nO melhor tempo é %.2f segundos dada na volta %d\n",menor,melhorvolta);
printf("Tempo médio das voltas é de %.2f\n",(soma/c));
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=0,melhor=0,v_melhor=0,c=0;
	float media=0,soma=0,tempo=0;
	printf("Digite o número da volta: ");
	scanf("%d",&n);
	if(n==0 || n<0){
		printf("Fim\n");
		melhor,v_melhor=0,0;
	}else{
		printf("Digite o tempo percorrido na volta: ");
		scanf("%f",&tempo);
		if(tempo>0){
			v_melhor = n;
			melhor = tempo;
			soma = tempo;
			c = 1;	
			while(n=!0){
				printf("Digite o número da volta: ");
				scanf("%d",&n);
				if(n==0 || n<0){
					break;
				}else{
					printf("Digite o tempo percorrido na volta: ");
					scanf("%f",&tempo);
					if(tempo>0){
						if(tempo<melhor){
							melhor = tempo;
							v_melhor = n;	
						}
						c+=1;
						soma = soma + tempo;
					}
				}
			}
		}
	}
	media = (soma/c);
	printf("O melhor tempo foi de %d na volta %d\n",melhor,v_melhor);
	printf("O tempo médio é de %.2f",media);
}

#include<stdio.h>
int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if(idade < 16){
		printf("N�o vota");
	}else if(idade <= 65){
		if(idade >= 16 && idade <= 17){
			printf("Facultativo");
		}else{
			printf("Obrigat�rio");
		}
	}else{
		printf("Facultativo");
	}
}

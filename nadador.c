#include<stdio.h>
int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if(idade <= 0){
		printf("????");
	}else{
		if(idade >= 18){
			printf("Categoria Sênior");
		}else if(idade >= 14){
			printf("Categoria Juvenil B");
		}else if(idade >= 11){
			printf("Categoria Juvenil A");
		}else if(idade >= 8){
			printf("Categoria Infantil B");
		}else if(idade >= 5){
			printf("Categoria Infantil A");
		}else{
			printf("Sem Categoria");
		}
	}
}

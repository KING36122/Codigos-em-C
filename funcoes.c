#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int soma(int a, int b){
	return (a+b);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	c = soma(a,b);
	printf("A soma de %d + %d é %d",a,b,c);
	return 0;
}

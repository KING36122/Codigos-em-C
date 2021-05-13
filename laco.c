#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i,par=0,soma=0;
	float m;
	for(i=0;i<N;i++){
		num = 1 + rand() % 1000;
		printf("\n%d",num);
		soma+=num;
		if(num%2==0){
			par++;
		}
	}
	m = (float) soma/N;
	printf("\nNúmeros pares: %d",par);
	printf("\nSomatório: %d",soma);
	printf("\nA media da soma pela quantidade é de: %.2f",m);
	return 0;
}

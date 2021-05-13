#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	int v[MAX],i,soma=0;
	for(i=0;i<MAX;i++){
		v[i] = 1 + rand() % 1000;
	}
	for(i=0;i<MAX;i++){
		printf("v[%d]: %d\n",i,v[i]);
	}
	for(i=0;i<MAX;i++){
		v[i] = v[i] * 2;
	}
	printf("\n");
	for(i=0;i<MAX;i++){
		printf("v[%d]: %d\n",i,v[i]);
	}
//	printf("A soma é de: %d",soma);
}

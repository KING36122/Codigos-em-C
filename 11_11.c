#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i=0,num=10,maior=0,menor=0;
	printf("Números gerados:\n");
	num = 1 + rand() % 1000;
	printf("%d\t",num);
	maior = num;
	menor = num;
	do{
		num = 1 + rand() % 1000;
		printf("%d\t",num);
		if(num>maior){
			maior = num;
		}else if(num<menor){
			menor = num;
		}
		i++;
	}while(i < N-1);
	printf("\nMaior: %d",maior);
	printf("\nMenor: %d",menor);
	return 0;
}

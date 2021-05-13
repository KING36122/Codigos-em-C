#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	int A[MAX],B[MAX],C[MAX],i,maior,menor;
	for(i=0;i<MAX;i++){
		A[i]= 1 + rand() % 1000;
		B[i]= 1 + rand() % 1000;
		C[i] = A[i] + B[i];
	}
	for(i=0;i<MAX;i++){
		printf("A[%d]: %d\t",i,A[i]);
		printf("B[%d]: %d\t",i,B[i]);
		printf("C[%d]: %d\n",i,C[i]);
	}
	maior = A[0];
	menor = A[0];
	for(i=0;i<MAX;i++){
		if(A[i]>maior){
			maior = A[i];
		}else if(A[i]<menor){
			menor = A[i];
		}
	}
	printf("\n O Maior número do vetor é %d ",maior);
	printf("\n O Menor número do vetor é %d ",menor);
}

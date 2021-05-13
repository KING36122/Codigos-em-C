#include<stdio.h>

int main(){
	int i, j, l=5, c=5, A[l][c];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			A[i][j] = 1 + rand() % 100;
		}
	}
	printf("\nMatriz A:\n");
	for(i=0;i<l;i++){
		printf("|\t");
		for(j=0;j<c;j++){
			printf("%d\t",A[i][j]);
		}
		printf("|");
		printf("\n");
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(i==j){
				A[i][j]=1;
			}
		}
	}
	printf("\nMatriz A:\n");
	for(i=0;i<l;i++){
		printf("|\t");
		for(j=0;j<c;j++){
			printf("%d\t",A[i][j]);
		}
		printf("|");
		printf("\n");
	}
}

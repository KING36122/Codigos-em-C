#include<stdio.h>

int main(){
	int i, j, l=3, c=2, A[l][c], B[l][c], C[l][c];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			A[i][j] = 1 + rand() % 100;
			B[i][j] = 1 + rand() % 100;
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			C[i][j] = A[i][j] + B[i][j];
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
	printf("\nMatriz B:\n");
	for(i=0;i<l;i++){
		printf("|\t");
		for(j=0;j<c;j++){
			printf("%d\t",B[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("\nMatriz C:\n");
	for(i=0;i<l;i++){
		printf("|\t");
		for(j=0;j<c;j++){
			printf("%d\t",C[i][j]);
		}
		printf("|");
		printf("\n");
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int lin,int col,int  m[lin][col]){
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			m[i][j] = 1+ rand()%10;
		}
	}
}

void b(int lin,int col, int m[lin][col]){
	int i,j;
	for(i=0;i<lin;i++){
		printf("|\t");
		for(j=0;j<col;j++){
			printf("%d\t",m[i][j]);
			if(j==col-1){
				printf("|");
			}
		}
		printf("\n");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int lin,col;
	printf("Digite o número de linhas: ");
	scanf("%d",&lin);
	printf("Digite o número de colunas: ");
	scanf("%d",&col);
	int m[lin][col];
	a(lin,col,m);
	printf("\n");
	b(lin,col,m);
}

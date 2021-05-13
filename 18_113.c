#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void pv(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1 + rand() % 1000;
	}
}

void i(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		printf("%d\n",v[i]);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int N=10,A[N];
	pv(A,N);
	i(A,N);
}

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

int bl(int v[],int t,int x){
	int i;
	for(i=0;i<t;i++){
		if(v[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int N=10,A[N],x=3,b;
	pv(A,N);
	i(A,N);
	b = bl(A,N,x);
	if(b>=0){
		printf("\nValor encontrado!");
		printf("\nA posi��o do n�mero %d = %d",x,b);
	}else{
		printf("\nValor n�o encontrado!");
	}
}

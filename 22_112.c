#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void pv(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		v[i] = 10 + rand() % 1000;
	}
}
void i(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
}

void o(int v[],int t){
	int i,j,menor,a;
	for(i=0;i<t-1;i++){
		menor = i;
		for(j=i+1; j<t;j++){
			if(v[j]<v[menor]){
				menor = j;
			}
		}
		if(i!=menor){
			a = v[i];
			v[i] = v[menor];
			v[menor] = a;
		}
	}
	printf("\n");
	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
}

int bb(int v[],int t,int x){
	int i,in=0,fim=t-1;
	while(in<=fim){
		int meio = ((in+fim)/2);
		if(x==v[meio]){
			return meio;
		}else if(x>v[meio]){
			in=meio+1;
		}else{
			fim=meio-1;
		}
	}
	return -1;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int N=10,A[N],x=51,b;
	pv(A,N);
	i(A,N);
	o(A,N);
	b=bb(A,N,x);
	if(b>=0){
		printf("\nO valor %d está na posição %d",x,b);
	}else{
		printf("\nO valor não está no vetor!");
	}
}

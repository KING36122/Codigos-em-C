#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int a(int qtd){
	printf("Digite a quantidade de números que o vetor terá: ");
	scanf("%d",&qtd);
	return qtd;
}

int b(int v[],int t,int va){
	int i,aux=-1,j;
	if(t==0){
		v[0]=va;
		return t += 1;
	}else{
		for(i=0;i<t;i++){
			if(va<v[i]){
				aux = i;
				i = t;
			}
		}
		if(aux>=0){
			for(i=t;i>=aux;i--){
				v[i + 1] = v[i];
			}
			v[aux]=va;
			return t += 1;
		}else{
			v[t]=va;
			return t += 1;
		}
	}
}

void c(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
}

int d(int v[],int t, int n){
	int i;
	for(i=0;i<t;i++){
		if(n==v[i]){
			return 1;
		}
	}
	return -1;
}

int e(int v[],int t, int n){
	int i,aux=-1;
	for(i=0;i<t;i++){
		if(n==v[i]){
			aux = i;
			i = t;
		}
	}
	if(aux>=0){
		for(i=aux;i<t;i++){
			v[i] = v[i+1];
		}
		return t -= 1;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd;
	qtd=a(qtd);
	int v[qtd],va,tam,j,va1,b1,tam1=tam,va2,b2,va3;
	printf("Digite os números para ordenar:\n");
	for(j=0;j<qtd;j++){
		scanf("%d",&va);
		tam = b(v,tam,va);
	}
	c(v,qtd);
	printf("\nDigite um número para remover da lista: ");
	scanf("%d",&va1);
	b1=d(v,tam,va1);
	if(b1==1){
		tam1=e(v,tam,va1);
		c(v,tam1);
	}else{
		printf("O valor não se encontra na lista!");
	}
	printf("\nDigite o valor que você quer alterar da lista: ");
	scanf("%d",&va2);
	b2=d(v,tam,va2);
	if(b2==1){
		tam1=e(v,tam,va2);
		printf("\nDigite o valor que você quer adicionar: ");
		scanf("%d",&va3);
		tam1 = b(v,tam1,va3);
		c(v,tam1-1);
	}else{
		printf("O valor não se encontra na lista!");
	}
}

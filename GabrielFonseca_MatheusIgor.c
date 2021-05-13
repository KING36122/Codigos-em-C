#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 5
int tam = 0;

int verificaVazio(){
	if(tam==0){
		return 0;
	}
}

int verificaCheio(){
	if(tam==N){
		return 0;
	}
}

void mostrar(int v[]){
	int i;
	printf("\n");
	for(i=0;i<tam;i++){
		printf("%d ",v[i]);
	}
}

void inserir(int v[],int valor){
	int i,aux=-1;
	if(tam==0){
		v[0]=valor;
		tam++;
	}else{
		for(i=0;i<tam;i++){
			if(valor<v[i]){
				aux = i;
				i = N;
			}
		}
		if(aux>=0){
			for(i=tam;i>=aux;i--){
				v[i + 1] = v[i];
			}
			v[aux]=valor;
			tam++;
		}else{
			v[tam]=valor;
			tam++;
		}
	}
}

int buscaBinaria(int v[],int x){
	int i,in=0,fim=tam-1;
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

int remover(int v[], int n){
	int i,aux=-1;
	for(i=0;i<tam;i++){
		if(n==v[i]){
			aux = i;
			i = tam;
		}
	}
	if(aux>=0){
		for(i=aux;i<tam;i++){
			v[i] = v[i+1];
		}
		tam--;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v[N],a,b,c,i,valor,x,r;
	a=verificaVazio();
	if(a==0){
		printf("Vetor vazio\n\n");
		if(tam==0){
			printf("Digite os valores do vetor:\n");
			for(i=0;i<N;i++){
				scanf("%d",&valor);
				inserir(v,valor);
			}
			b=verificaCheio();
			if(b==0){
				printf("\nVetor cheio\n");
			}
			mostrar(v);
			printf("\n");
		}
		while(tam<=N){
			printf("\nVocê deseja remover valores do vetor?(Digite 1 para sim ou 2 para não)\n");
			scanf("%d",&r);
			if(r==1){
				printf("\nDigite um número para remover da lista: ");
				scanf("%d",&x);
				c=buscaBinaria(v,x);
				if(c>=0){
					tam=remover(v,x);
					mostrar(v);
				}else{
					printf("\nO valor não está no vetor!");
				}
				if(tam==0){
					printf("Vetor vazio\n\n");
					break;
				}
			}else if(r==2){
				printf("Finalizando...\n");
				printf("Vetor:\n");
				mostrar(v);
				break;
			}else{
				printf("Valor inválido!...\n");
			}
		}
	}
}

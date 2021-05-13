#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i=0,n=10,j=n-1;
	while(i<n){
		printf("%d\t%d\n",i,j);
		i++;
		j--;
	}
	return 0;
}

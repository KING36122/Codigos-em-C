#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	float area, lado;
	printf("\nDigite o lado: ");
	scanf("%f", &lado);
	area = lado*lado;
	printf("A area eh: %.0f",area);
}

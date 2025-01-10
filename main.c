#include <stdio.h>

int main(){

	int a,b,c;

	printf("Podej dlugosc boku A: ");
	scanf("%d",&a);
	printf("Podej dlugosc boku B: ");
	scanf("%d",&b);
	printf("Podej dlugosc boku C: ");
	scanf("%d",&c);

	int wynik = a*b*c;

	printf("\nObjetosc prostopadloscianu\nA x B x C = %d", wynik);
}

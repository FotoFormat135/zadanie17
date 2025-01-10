#include <stdio.h>

float cube(){
	float a,b,c;

	printf("Podaj dlugosc boku A: ");
	scanf("%f",&a);
	printf("Podaj dlugosc boku B: ");
	scanf("%f",&b);
	printf("Podaj dlugosc boku C: ");
	scanf("%f",&c);

	return a*b*c;
}

float sphere(){
	float r;

	printf("Podaj pronien R: ");
	scanf("%f",&r);

	return 1.33 * 3.14 * r*r*r;
}

int main(){
	int w;

	ptintf("Oblicz objetosc\n-----------\n1.Prostopadloscianu\n2.Kuli\n:");
	scanf("%d", &w);

	switch(w){
		case 1:
			printf("\nA x B x C = %f", cube());
		break;
		case 2:
			printf("\n4/3 x PI x R^3 = %f", sphere());
		break;
	}

return 0;
}

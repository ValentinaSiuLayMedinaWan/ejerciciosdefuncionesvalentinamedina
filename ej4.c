#include <stdio.h>
void media(float a, float b){
	float m;
	m=(a+b)/2;
	printf("la media es:%.2f\n",m);
}
int main() {
	float a,b;
	printf("ingrese el primer numero\n");
	scanf("%f",&a);
	printf("ingrese el segundo numero\n");
	scanf("%f",&b);
	media(a,b);
	return 0;
}


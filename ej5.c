#include <stdio.h>
float media(float a, float b, float c){
	float m;
	m=(a+b+c)/3;
	return m;
}
	int main() {
		float a,b,c;
		printf("ingrese el primer numero\n");
		scanf("%f",&a);
		printf("ingrese el segundo numero\n");
		scanf("%f",&b);
		printf("ingrese el tercer numero\n");
		scanf("%f",&c);
		printf("la media es:%.2f\n",media(a,b,c));
		return 0;
	}


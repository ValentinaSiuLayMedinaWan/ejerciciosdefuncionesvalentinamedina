#include <stdio.h>
void ho(float b){
	int h;
	h=b*24;
	printf("%.2f dias son %d horas",b,h);
}
	void dia(float b){
		float d;
		d=b/24;
		printf("%.2f horas son %.2f dias",b,d);
	}
int main() {
	int a;
	float b;
	printf("ingrese 1 si son horas o ingrse 0 si son dias\n");
	scanf("%d",&a);
	printf("ingrese la cantidad\n");
	scanf("%f",&b);
	if(a==1)
		dia(b);
	else
		ho(b);
	
	return 0;
}


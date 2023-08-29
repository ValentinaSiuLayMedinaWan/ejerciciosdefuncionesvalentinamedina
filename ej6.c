#include <stdio.h>
void pon(int a){
	int b;
	if(a<0){
		a=a*(-1);
		printf("1 y el numero es %d",a);
	}
	else
	   printf("0 y el numero es %d",a);
}
int main() {
	int a;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	while(a==0){
		printf("no puede ser 0\n");
		printf("ingrese un numero\n");
		scanf("%d",&a);
	}
	pon(a);
	return 0;
}


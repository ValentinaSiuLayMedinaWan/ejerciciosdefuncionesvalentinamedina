#include <stdio.h>

void ascii(int a){
	printf("en los simbolos ascii es: %c\n",a);
}
int main() {
	int a;
	printf("ingrese un numero entero\n");
	scanf("%d",&a);
	ascii(a);
	return 0;
}


#include <stdio.h>
void multi(int a, int b){
	int d=0;
	for(a; a>0; a--){
		d=d+b;
	}
	printf("la multiplicacion es:%d",d);
}
	void divi(int a, int b){
		int d=0,i=0;
		while(a>=b){
			d=a-b;
			a=d;
			i++;
		}
		printf("la divicion es:%d",i);
	}
int main() {
	int a,b,c;
	printf("ingrese 1 si es muliplicacion o ingrese 0 si es dividion\n");
	scanf("%d",&c);
	printf("ingrese el primer numero\n");
	scanf("%d",&a);
	printf("ingrese el segundo numero\n");
	scanf("%d",&b);
	while(a&&b<0){
		printf("tienen que ser positivos\n");
		printf("ingrese el primer numero\n");
		scanf("%d",&a);
		printf("ingrese el segundo numero\n");
		scanf("%d",&b);
	}
	if(c==1)
		multi(a,b);
	else
		divi(a,b);
	return 0;
}


#include <stdio.h>
int pro(int s,int i){
	int p=0,p1=0;
	p=s/i;
	if(p>=9)
		p1=4;
	else
		if(p>=7)
			p1=3;
		else
			if(p>=6)
				p1=2;
			else
				if(p>=5)
					p1=1;
				else
					p1=0;
	return p1;
}
int main() {
	int i=0,n,s=0,p=0;
	printf("igrese 0 para dejar de ingresar notas\n");
	do{
		printf("ingrese las notas del alumno\n");
		scanf("%d",&n);
		s=s+n;
		i++;
	} while(n!=0);
	i=i-1;
	p=pro(s,i);
	printf("el promedio es %d",p);
	return 0;
}


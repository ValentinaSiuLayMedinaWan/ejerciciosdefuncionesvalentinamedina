#include <stdio.h>

void mos(char nom[20], char ape[20]){
	printf("ingrese nombre del alumno\n");
	gets(nom);
	printf("ingrese apellido del alumno\n");
	gets(ape);
	printf("%s %s\n",nom,ape);
}

int main() {
	char nom[20],ape[20];
	mos(nom,ape);
	return 0;
}


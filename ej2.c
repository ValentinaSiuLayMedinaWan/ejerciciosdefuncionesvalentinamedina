#include <stdio.h>
#include <conio.h>
void muestra(char contra[20], char carac){
	printf("quiere ver la contrase�a (s/n)\n");
	carac =getch();
	if(carac =='s'|| carac=='S')
		printf("la contrase�a que ingreso es:%s\n",contra);
}
int main() {
	int i=0;
	char contra[6], carac;
	printf("ingrese una contrase�a de 6 caracteres\n");
	while(i<6){
		contra[i] =getch();
		printf("*");
		i++;
		contra[6]='\0';
	}
	printf("\n");
	muestra(contra,carac);
	return 0;
}


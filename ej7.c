#include <stdio.h>
void c1(int a){
	switch (a){
	case 0:
		printf("cero\n");
		break;
	case 1:
		printf("uno\n");
		break;
	case 2:
		printf("dos\n");
		break;
	case 3:
		printf("tres\n");
		break;
	case 4:
		printf("cuatro\n");
		break;
	case 5:
		printf("cinco\n");
		break;
	case 6:
		printf("seis\n");
		break;
	case 7:
		printf("siete\n");
		break;
	case 8:
		printf("ocho\n");
		break;
	case 9:
		printf("nueve\n");
		break;
	case 10:
		printf("diez\n");
		break;
	case 11:
		printf("once\n");
		break;
	case 12:
		printf("doce\n");
		break;
	case 13:
		printf("trece\n");
		break;
	case 14:
		printf("catorce\n");
		break;
	case 15:
		printf("quince\n");
		break;
	case 16:
		printf("dieciseis\n");
		break;
	case 17:
		printf("diecisiete\n");
		break;
	case 18:
		printf("dieciocho\n");
		break;
	case 19:
		printf("diecinueve\n");
		break;
	case 20:
		printf("veinte\n");
		break;
	case 21:
		printf("veintiuno\n");
		break;
	case 22:
		printf("veintidos\n");
		break;
	case 23:
		printf("veintitres\n");
		break;
	case 24:
		printf("veinticuatro\n");
		break;
	case 25:
		printf("veinticinco\n");
		break;
	case 26:
		printf("veintiseis\n");
		break;
	case 27:
		printf("veintisiete\n");
		break;
	case 28:
		printf("veintiocho\n");
		break;
	case 29:
		printf("veintinueve\n");
		break;
	case 100:
		printf("cien\n");
		break;
	}
}
void c2(int c){
	switch (c){
	case 3:
		printf("treinta ");
		break;
	case 4:
		printf("cuarenta ");
		break;
	case 5:
		printf("cincuenta ");
		break;
	case 6:
		printf("sesenta ");
		break;
	case 7:
		printf("setenta ");
		break;
	case 8:
		printf("ochenta ");
		break;
	case 9:
		printf("noventa ");
		break;
	}
}
void c3(int c){
	switch (c){
	case 1:
		printf("ciento ");
		break;
	case 2:
		printf("doscientos ");
		break;
	case 3:
		printf("trecientos ");
		break;
	case 4:
		printf("cuatrocientos ");
		break;
	case 5:
		printf("quinientos ");
		break;
	case 6:
		printf("seiscientos ");
		break;
	case 7:
		printf("setecientos ");
		break;
	case 8:
		printf("ochocientos ");
		break;
	case 9:
		printf("novecientos ");
		break;
}
}
int main() {
	int c;
	float a,b;
	printf("ingrese un numero\n");
	scanf("%f",&a);
	do{
		if(a<30 || a==100){
			c1(a);
			a=a-a;
		}
		else
		   if(a>=100){
			b=a/100;
			c=b;
			c3(c);
			a=(b-c)*100+0.1;
		}
		   else{
			b=a/10;
			c=b;
			c2(c);
			a=(b-c)*10;
			if (a>0)
				printf("y ");
		}
	}while(a!=0);
	return 0;
}


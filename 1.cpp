#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main (void){
	char a[20],b[20],c[20];
	
	puts("Ingrese su nombre completo");
	scanf("%[^\n]",&a);
	puts("Ingresa tu numero de seguridad social");
	scanf("%s",&b);
	puts("Ingrese su fecha de nacimiento con el siguiente formato 99/99/9999 dia, mes y año respectivamente");
	scanf("%s",&c);
	system("cls");
	
	printf(" Su nombre es:%s\n Su numero de seguridad social es: %s\n Fecha de nacimiento: %s\n",a,b,c);
	return 0;
	
}

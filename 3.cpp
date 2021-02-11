#include<conio.h>
#include<stdio.h>
int main (void){
	int rea,rep; // resultado del area, resultado del perimetro, utilizamos int porque tenemos numeros enteros
	int w=3, h=5; //utilizamos variable de tipo flotante porque los numeros que tenemos son enteros
	rea=w*h;// el valor del area de rectangulo es width * height
	rep=w+w+h+h; //el valor del perimetro de un rectangulo es la suma de todos sus lados
	puts("Obtener el valor del area y perimetro un rectangulo con width de 3 pulgadas y height de 5 pulgadas");
	printf("El valor de el area es: %d\nEl valor del perimetro es: %d\n",rea,rep);//utilizamos %d porque son numeros enteros
	
	
	float rea1,rep1; // utilizamos float porque tenemos numeros con decimales, variables para resultado de area y de perimetro del segundo rectangulo
	float w1=6.8, h1=2.3; //utilizamos variable de tipo flotante porque los numeros que tenemos tienen decimales
	rea1=w1*h1;// el valor del area de rectangulo es width * height
	rep1=w1+w1+h1+h1; //el valor del perimetro de un rectangulo es la suma de todos sus lados
	puts("\nCambiar el programa para que pueda dar el valor del area y perimetro de un rectangulo con width de 6.8 pulgadas y height de 2.3 pulgadas");
	printf("El valor del area es: %.2f\nEl valor del perimetro es: %.2f",rea1,rep1);
	
	return 0;
}

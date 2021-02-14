#include<conio.h>
#include<stdio.h>
int main(void){

	float floatingnum;
	int integer;
	char character;
	floatingnum= 6.3;
	integer=56	;
	character= 'H';
	
	printf("%f as %%d: %d\n",floatingnum,floatingnum);
	printf("%d as %%f: %f\n",integer,integer);
	printf("%c as %%d: %d\n",character,character);
}

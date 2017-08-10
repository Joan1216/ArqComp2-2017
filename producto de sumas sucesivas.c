#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z,i;
	printf("Ingrese dos numeros enteros para multiplicar\n");
	printf("ingrese el primero: ");
	scanf("%d",&x);
	printf("ingrese el segundo: ");
	scanf("%d",&y);
	
	z=0;
	for(i=1;i<=y;i++)
	{
		z=z+x;
	}
	printf("la multiplicacion por sumas sucesivas es: %d\n",z);
	system("pause");
	
	
	return 0;
}

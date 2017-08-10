#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,c,d;
	 
     printf("Digite los numeros enteros a multiplicar\n");
	 printf("Primer dato: ");
	  scanf("%d",&a);
	 printf("Segundo dato: ");
	  scanf("%d",&b);	
	 d=0;
	for(c=0;c<b;c++)
	  d=a+d; 
   	 printf("la multiplicacion es: %d\n",d);

system("pause");
	
	
	return 0;
}

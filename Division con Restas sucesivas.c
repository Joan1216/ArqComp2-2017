#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c,d; 
     printf("Digite dos numeros enteros a dividir\n");
     printf( "Digite el dividendo: " );
      scanf( "%d", &a);
     printf( "Digite el divisor: " );
      scanf( "%d", &b );
     d = a;
    while (a>=b)
        {
            a = a-b;
            c++;
        }
    printf( "La division sucesiva de %d / %d = %d Residuo = %d \n", d, b, c, a);
    return 0;
}

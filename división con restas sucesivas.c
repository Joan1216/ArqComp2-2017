#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y,z,i;
	//x=dividendo, y=divisor, z=cociente e i=residuo
    printf("Ingrese dos numeros enteros para dividir\n");
    printf( "Ingrese el dividendo: " );
    scanf( "%d", &x);
    printf( "Ingrese el divisor: " );
    scanf( "%d", &y );

    if (y>0 )
    {
        z = 0;
        i = x;

        while (i>=y )
        {
            i = i-y;
            z++;
        }

        printf( "La division con restas sucesivas de (%d dividido %d) = %d y el Residuo = %d \n", x, y, z, i);
    }
    else
        printf( "La divicion entre cero no existe!!!\n");

    system("pause");

    return 0;
}

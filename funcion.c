// compilar como   gcc -lm func.c -o func
#include <stdio.h>
#include <math.h>


int funcion(int x1,int x2, int x3, int x4, int x5, int x6,int x7)
	{
	int resultado;
	if (x7 > 4)
		{
		resultado = x1+x2+x3+x4-x5-x6;
		}
	else
		{
		resultado = x1+x2+x3+x4+x5-x6;
		}
	return resultado;
	}
int main()
	{
 int resultado = funcion(1,2,3,4,5,6,7);
	//printf ("resultado: %d\n",resultado);
	return 0;
	}

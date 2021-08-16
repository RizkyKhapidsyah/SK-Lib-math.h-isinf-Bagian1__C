#include <stdio.h>      /* printf */
#include <math.h>       /* isinf, sqrt */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("isinf(0.0)       : %d\n", isinf(0.0));
	printf("isinf(1.0/2.0)   : %d\n", isinf(1.0 / 2.0));
	printf("isinf(-1.0/2.0)  : %d\n", isinf(-1.0 / 2.0));
	printf("isinf(sqrt(-1.0)): %d\n", isinf(sqrt(-1.0)));
	_getch();
	return 0;
}
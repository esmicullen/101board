#include <stdio.h>

void main(void) {
	int su = 2;
	for (int su = 2; su <= 9; su++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", su, i, su * i);
		}
	}
}
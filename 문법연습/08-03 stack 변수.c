#include <stdio.h>


void local_increase(void)
{
	int a = 0;
	printf("지역변수 %d \n", a);
	a++;
}


void main(void)
{
	for (int i = 1; i <= 5; i++) {
		local_increase();
	}
}
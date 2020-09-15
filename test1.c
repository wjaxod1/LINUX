#include <stdio.h>

int main()
{
	int num1 =0;
	int num2 = 0;
	int result  = 0;

	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	return 0;
}

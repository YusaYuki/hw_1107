#include <stdio.h>
#include <stdlib.h>

int a, b, temp, tempa, tempb;

int main(void) 
{
	printf("叫块ㄢ俱计璸衡程そ计(筳秨)");
	scanf_s("%d %d", &a, &b);
	tempa = a;
	tempb = b;
	temp = a % b;
	
	while (temp != 0) 
	{
		a = b;
		b = temp;
		temp = a % b;
	}

	printf("%d ,%d程そ计%d\n", tempa,tempb, tempa * tempb / b);
	system("pause");
	return 0;
}
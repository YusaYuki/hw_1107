#include <stdio.h>
#include <stdlib.h>

int n, m, ans;
int power(int a, int b);

int main(void)
{
	printf("請輸入兩數計算n的m次方(以空隔間格)：");
	scanf_s("%d %d", &n, &m);
	printf("power(%d, %d) =", n, m);
	power(n, m);
	printf("\n");
	system("pause");
	return 0;
}

int power(int a, int b)
{
	printf(" %d ", a);
	if (b > 1)
	{
		printf("*");
		return power(a, b - 1);
	}
	else
	{
		return 1;
	}
}
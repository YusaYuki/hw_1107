#include <stdio.h>
#include <stdlib.h>

int a, b, temp, tempa, tempb;

int main(void) 
{
	printf("�п�J��Ӿ�ƥH�p��̤p������(�H�Ů�j�})�G");
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

	printf("%d ,%d���̤p�����Ƭ�%d\n", tempa,tempb, tempa * tempb / b);
	system("pause");
	return 0;
}
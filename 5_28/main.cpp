#include <stdio.h>
#include <stdlib.h>

char a;
int change(int w);

int main(void)
{
	printf("�п�J�@�ӭ^��r���H�ഫ�j�p�g�G");
	scanf_s("%c", &a);
	change(a);
	system("pause");
	return 0;
}

int change(int w) {
	if (w > 0x40 && w < 0x5B)
	{
		printf("��J�r���j�g%c\n�p�g��%c\n", w, w + 0x20);
	}
	else if (w < 0x7B && w > 0x60) 
	{
		printf("��J�r���p�g%c\n�j�g��%c\n", w, w - 0x20);
	}
	else 
	{
		printf("��J���~\n");
	}
	return 1;
}
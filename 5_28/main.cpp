#include <stdio.h>
#include <stdlib.h>

char a;
int change(int w);

int main(void)
{
	printf("請輸入一個英文字母以轉換大小寫：");
	scanf_s("%c", &a);
	change(a);
	system("pause");
	return 0;
}

int change(int w) {
	if (w > 0x40 && w < 0x5B)
	{
		printf("輸入字為大寫%c\n小寫為%c\n", w, w + 0x20);
	}
	else if (w < 0x7B && w > 0x60) 
	{
		printf("輸入字為小寫%c\n大寫為%c\n", w, w - 0x20);
	}
	else 
	{
		printf("輸入錯誤\n");
	}
	return 1;
}
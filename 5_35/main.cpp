#include <stdio.h>
#include <stdlib.h>

unsigned int n;
unsigned long long int f(int k);

int main(void) 
{
    printf("請輸入要到費氏數列第幾項：");
    scanf_s("%d", &n);
    if (n <= 0) 
    {
        printf("請輸入大於0的正整數\n");
    }
    else
    {
        f(n);
    }
    system("pause");
    return 0;
}

unsigned long long int f(int k)
{
    int a = 0, b = 1, ans;
    printf("費氏數列到第%d項為：", k);
    for (int i = 1; i <= k; i++) 
    {
        printf("%d ", a);
        ans = a + b;
        a = b;
        b = ans;
    }
    printf("\n");
    return 1;
}
#include <stdio.h>
#include <stdlib.h>

unsigned int n;
unsigned long long int f(int k);

int main(void) 
{
    printf("�п�J�n��O��ƦC�ĴX���G");
    scanf_s("%d", &n);
    if (n <= 0) 
    {
        printf("�п�J�j��0�������\n");
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
    printf("�O��ƦC���%d�����G", k);
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
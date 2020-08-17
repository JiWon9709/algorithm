#include <stdio.h>

int main(void)
{
    int n;
    int num;
    int cycle = 0;
    int sum;

    scanf("%d", &n);
    num = n;
    while (1)
    {
        if (num < 10)
            sum = num;
        else
        {
            sum = (num / 10) + (num % 10);
        }
        if (sum >= 10)
            sum = sum % 10;
        num = ((num % 10) * 10) + sum;
        cycle++;
        if (num == n)
            break;
    }
    printf("%d", cycle);
    return (0);
}
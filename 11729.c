#include <stdio.h>
#include <math.h>
void ft_move(int from, int to)
{
    printf("%d %d\n", from, to);
}

void ft_hanoi(int k, int from, int by, int to)
{
    if (k == 1)
        ft_move(from, to);
    else
    {
        ft_hanoi(k - 1, from, to, by);
        ft_move(from, to);
        ft_hanoi(k - 1, by, from, to);
    }
}

int main(void)
{
    int k;
    int count;
    scanf("%d", &k);

    count = pow(2, k) - 1;
    printf("%d\n", count);
    ft_hanoi(k, 1, 2, 3);
}
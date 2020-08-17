#include <stdio.h>
// int get_even(int n)
// {
//     int even = 0;
//     while (n >= 2)
//     {
//         n = n / 2;
//         even++;
//     }
//     return even;
// }

int main(void)
{
    int n;
    int i = 1;
    int j;
    int even, odd;

    scanf("%d", &n);
    n = n / 2;
    if (n % 2 == 0)
        odd = n + 1;
    else
        even = n + 1;
    
    while (n * 2 >= i)
    {
        if (i % 2 == 0)
        {
            j = 0;
            while (n > j++)
                printf(" *");
        }
        if (i % 2 == 1)
        {
            j = 0;
            while (n > j++)
                printf("* ");
        }
        // if (i == n)
        //     break;
        printf("\n");
        i++;
    }
    return (0);
}
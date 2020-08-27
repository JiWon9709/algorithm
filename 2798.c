#include <stdio.h>
// 블랙잭

int main(void)
{
    int n, m;
    int i = 0;
    int sum;
    int best = 0;
    scanf("%d %d", &n, &m);
    int arr[n];
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                // if (i == 0)
                //     best = sum;
                if (sum <= m)
                    if (sum >= best)
                        best = sum;
            }
        }
    }
    printf("%d", best);
    return (0);
}
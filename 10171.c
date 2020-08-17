#include <stdio.h>

int main(void)
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    if (y < 45 && x == 0)
    {
        y = 60 - (45 - y);
        x = 23;
    }
    else if (y < 45 && x != 0)
    {
        x -= 1;
        y = 60 - (45 - y);
    }
    else if (y >= 45 && x == 0)
    {
        y -= 45;
    }
    else
    {
        y -= 45;
    }
    printf("%d %d", x, y);
    return (0);
}
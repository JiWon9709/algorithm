#include <stdio.h>
void make_1line(void)
{
    printf("***");
}

void make_2line(void)
{
    printf("* *");
}

void make_nextline(void)
{
    printf("\n");
}

void make_star(int n)
{
    if (n == 3)
        make_default();
    else
    {
        make_star(n / 3);
    }
    
}

int main(void)
{
    int n;

    scanf("%d", &n);
    make_star(n);
}
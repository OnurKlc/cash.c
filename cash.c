#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("How much change is owed: ");
    }
    while (n < 0);
    n = n * 100;
    float m = ceilf(n * 100) / 100;
    int x = m;
    int a;
    int b;
    int c;
    int d;

    if (x >= 25)
    {
        a = x / 25;
        x = x % 25;
    }
    else
    {
        a = 0;
    }

    if (x >= 10)
    {
        b = x / 10;
        x = x % 10;
    }
    else
    {
        b = 0;
    }

    if (x >= 5)
    {
        c = x / 5;
        x = x % 5;
    }
    else
    {
        c = 0;
    }

    if (x >= 1)
    {
        d = x / 1;
    }
    else
    {
        d = 0;
    }

    int e = a + b + c + d;
    printf("%d\n", e);
}
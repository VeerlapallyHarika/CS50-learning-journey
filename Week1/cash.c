#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    int c = 0;
    do
    {
        n = get_int("change owned:");
    }
    while (n < 0);
    // program for coins
    c += n / 25;
    n = n % 25;

    c += n / 10;
    n = n % 10;

    c += n / 5;
    n = n % 5;

    c += n / 1;
    n = n % 1;

    printf("%d\n", c);
}

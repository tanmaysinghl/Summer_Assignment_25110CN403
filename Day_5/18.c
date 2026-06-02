#include <stdio.h>
// function to calculate factorial
int fact(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    int n, res = 0;
    printf("Enter the number to check if it is a strong no:\n");
    scanf("%d", &n);
    int a = n;
    while (a > 0)
    {
        int ld = a % 10;
        res = res + fact(ld);
        a = a / 10;
    }
    if (res == n)
        printf("The number %d is a strong number", n);
    else
        printf("The number %d is not a strong number", n);
    return 0;
}
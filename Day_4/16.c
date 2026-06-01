#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers for range to find armstrong numbers in between:");
    scanf("%d %d", &n1, &n2);
    printf("The armstrong numbers between %d and %d are:\n",n1,n2);
    for (int i = n1; i <= n2; i++)
    {
        // finding no of digits
        int a = i, count = 0;
        while (a > 0)
        {
            count++;
            a = a / 10;
        }
        int sum = 0;
        a = i;
        while (a > 0)
        {
            int ld = a % 10;
            sum = sum + round(pow(ld, count));
            a = a / 10;
        }

        if(sum==i) printf("%d ",i);
    }
}
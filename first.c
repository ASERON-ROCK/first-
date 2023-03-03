// this file is eddit by Akbera
#include <stdio.h>
void main()
{
    int n;
    printf(" eneter the numebr ");
    scanf("%d", &n);
    int j = 1;
    int flag = 0;
    for (j = 2; j <= n / 2; j++)
    {
        if (n % j == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("number is prime");
    }
    else
    {
        printf("numbr is not prime");
    }
}
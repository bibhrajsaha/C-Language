#include <stdio.h>

int power(int n1, int n2);

int main()
{
    int base, powerr, result;

    printf("Enter base number: ");
    scanf("%d",&base);

    printf("Enter power number(positive integer): ");
    scanf("%d",&powerr);

    result = power(base, powerr);

    printf("%d^%d = %d", base, powerr, result);
    return 0;
}

int power(int base, int powerr)
{
    if (powerr != 0)
        return (base*power(base, powerr-1));
    else
        return 1;
}

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    while (1)
    {
        int number;
        printf("Enter the number for prime number test (enter 0 to exit): ");
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        if (isPrime(number))
        {
            printf("%d is a prime number.\n", number);
        }
        else
        {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}

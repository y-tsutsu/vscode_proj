#include <stdio.h>
#include "fizz_buzz.h"

void fizz_buzz(int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("%d\n\0Fizz\n\0FizzBuzz\n" + ((i % 15) ? (i % 3) ? (i % 5) ? 0 : 14 : 4 : 10), i);
    }
}

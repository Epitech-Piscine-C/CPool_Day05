#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb < 0)
        return 0;
    while (++i <= nb)
        result *= i;
    return result;
}

int main()
{
    printf("%d\n", my_compute_factorial_it(-1));
    printf("%d\n", my_compute_factorial_it(0));
    printf("%d\n", my_compute_factorial_it(3));
    printf("%d\n", my_compute_factorial_it(5));
    return 0;
}
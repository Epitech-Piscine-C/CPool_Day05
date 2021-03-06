#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int i;
    int result;

    i = 0;
    result = 1;
    if (p < 0)
        return 0;
    while (++i <= p)
        result *= nb;
    return result;
}

int main()
{
    printf("%d\n", my_compute_power_it(5, -1));
    printf("%d\n", my_compute_power_it(5, 0));
    printf("%d\n", my_compute_power_it(5, 5));
    return 0;
}
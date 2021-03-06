#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    else if (p == 0)
        return 1;
    return nb * my_compute_power_rec(nb, p - 1);
}

int main()
{
    printf("%d\n", my_compute_power_rec(5, -1));
    printf("%d\n", my_compute_power_rec(5, 0));
    printf("%d\n", my_compute_power_rec(5, 5));
    return 0;
}
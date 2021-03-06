#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i;

    i = 0;
    if (nb == 1)
        return 1;
    while (++i < nb / 2)
        if (i * i == nb)
            return i;
    return 0;
}

int main()
{
    printf("%d\n", my_compute_square_root(0));
    printf("%d\n", my_compute_square_root(1));
    printf("%d\n", my_compute_square_root(5));
    printf("%d\n", my_compute_square_root(25));
    return 0;
}
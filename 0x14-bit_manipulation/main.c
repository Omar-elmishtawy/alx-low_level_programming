#include "main.h"
int main(void)
{
    int n;

    n = get_bit(1024, 7);
    printf("%d\n", n);
    n = get_bit(1, 10);
    printf("%d\n", n);
    n = get_bit(1024, 7);
    printf("%d\n", n);
    return (0);
}

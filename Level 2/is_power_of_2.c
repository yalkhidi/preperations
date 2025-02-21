
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return (1);
    else
        return (0);
}

#include <stdio.h>

int main() {
    printf("%d\n", is_power_of_2(1));    // 1 (2^0)
    printf("%d\n", is_power_of_2(2));    // 1 (2^1)
    printf("%d\n", is_power_of_2(4));    // 1 (2^2)
    printf("%d\n", is_power_of_2(8));    // 1 (2^3)
    printf("%d\n", is_power_of_2(16));   // 1 (2^4)
    printf("%d\n", is_power_of_2(1024)); // 1 (2^10)
    printf("%d\n", is_power_of_2(0));    // 0 (not a power of 2)
    printf("%d\n", is_power_of_2(3));    // 0 (not a power of 2)
    printf("%d\n", is_power_of_2(10));   // 0 (not a power of 2)
    printf("%d\n", is_power_of_2(19));   // 0 (not a power of 2)

    return 0;
}

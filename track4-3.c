#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);

    scanf("%d", &b);

    scanf("%d", &c);

    scanf("%d", &d);

    int min_value = a;
    if (b < min_value)
        min_value = b;
    if (c < min_value)
        min_value = c;
    if (d < min_value)
        min_value = d;

    printf("%d\n", min_value);
    return 0;
}
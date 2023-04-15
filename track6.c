#include <stdio.h>
#include <math.h>
int main()
{

    long int n;
    scanf("%li", &n);
    if (sqrt(n) * sqrt(n) == n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
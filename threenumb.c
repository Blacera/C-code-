#include <stdio.h>
#include <math.h>
int main () {
    long long int a;
    scanf ("%lld",&a) ;
    printf ("%lld\n",a/100);
    printf ("%lld\n",a/10%10);
    printf ("%lld",a%10);
    return 0;
}
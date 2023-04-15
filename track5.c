#include <stdio.h>
int main()
{
    long int a,b ;
    scanf("%li", &a);
    scanf("%li", &b);
    if (a > b) 
    printf("%li %li", b, a);
    else 
    printf ("%li %li",a,b);
    return 0;
}
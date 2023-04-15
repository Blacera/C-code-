#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf ("%d",&n );
    printf ("%d\n",n/10); // tách lấy chữ số hàng chục bằng phép chia lấy nguyên 
    printf ("%d",n%10); // lấy chữ số hàng đơn vị bằng chia lấy dư 
    return 0 ;
}
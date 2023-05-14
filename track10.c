#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    // kiểu dữ liệu số nguyên > 0
    long long int i;
    scanf("%lld", &n);
     long long int count = 0;
    for (i = n + 1; i <= n * n; i++) // điều kiện n > 1 nên ta cho n chạy từ n + 1
    {
        count++; // không cần biểu thức vì bản chất vòng lặp đã xác định các giá trị cần in ra
    }
    printf("%lld", count);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int n, arr[100], i; // mảng khai báo gồm 100 phần tử 
    int sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i]; // hoặc += arr[i]
        }
    }
    printf("%d", sum);
    return 0;
}
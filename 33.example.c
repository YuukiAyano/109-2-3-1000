/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
int MaxSubsequenceSum(int a[], int n)
{
    int sum, maxsum, i;
    sum = maxsum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxsum)
            maxsum = sum;
        else if (sum < 0)
            sum = 0;
    }
    return maxsum;
}
int main()
{
    int i, a[10];
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d ", MaxSubsequenceSum(a, 10));
    return 0;
}

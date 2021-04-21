/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
int main()
{
    int i, j, a[10], k, ans = 0;
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (i = 0; i <= 8; i++)
        for (j = i + 1; j <= 9; j++)
            if (a[i] + a[j] == k)
            {
                printf("%d %d\n", a[i], a[j]);
                ans = 1;
            }
    if (ans == 0)
        printf("0");
    return 0;
}

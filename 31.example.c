/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
int main()
{
    int i, max, min, data;
    scanf("%d", &data);
    max = min = data;
    for (i = 2; i <= 10; i++)
    {
        scanf("%d", &data);
        if (data > max)
            max = data;
        else if (data < min)
            min = data;
    }
    printf("%d\n", max);
    printf("%d\n", min);
    return 0;
}

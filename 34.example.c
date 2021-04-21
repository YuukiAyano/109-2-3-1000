/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, length;
    char s[1001];
    scanf("%s", s);
    length = strlen(s);
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                break;
        if (j == i)
            printf("%c", s[i]);
    }
    return 0;
}

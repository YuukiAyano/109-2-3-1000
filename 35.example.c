/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[81];
    int i, j, length;
    scanf("%s", s);
    length = strlen(s);
    for (i = 0; i < length; i++)
    {
        for (j = length - i - 1; j < length; j++)
            printf("%c", s[j]);
        printf("\n");
    }
    return 0;
}

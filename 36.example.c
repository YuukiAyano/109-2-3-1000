/*
    Warning!!!
    It's a example version!!!
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/
#include <stdio.h>
#include <string.h>
#define SWAP(x, y) \
    t = (x);       \
    (x) = (y);     \
    (y) = t
#define N 33
#define Blen 4
void encode(char *);
int main(void)
{
    char data[N];
    scanf("%s", &data);
    encode(data);
    printf("%s", data);
    return 0;
}
void encode(char data[])
{
    int digit, i, j, t, len, zerolen;
    len = strlen(data);
    if (len % Blen != 0)
    {
        zerolen = Blen - len % Blen;
        for (i = 0; i < zerolen; i++)
            data[len++] = '0';
        data[len] = '\0';
    }
    for (i = 0; data[i] != '\0'; i += Blen)
    {
        for (j = 0; j < Blen; j++)
        {
            digit = data[i + j] - '0';
            digit = (digit + 5) % 10;
            data[i + j] = digit + '0';
        }
        SWAP(data[i + 0], data[i + 2]);
        SWAP(data[i + 1], data[i + 3]);
    }
}

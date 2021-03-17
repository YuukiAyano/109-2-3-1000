/*
    Powered by 陳思鏡
    Student ID: B10813180
    Class Information: 109-2 wed 10:00
    Edited with visual studio code insiders
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0, sum = 0, result = 0;
    for (int counter = 0; counter < 10; counter++)
    {
        scanf("%d", &input);

        sum = input + sum;

        if (sum < 0)
        {
            result = 0;
            sum = 0;
        }
        else if (result < sum)
        {
            result = sum;
        }
        else
            continue;
    }
    printf("%d", result);
    system("pause > nul");
}

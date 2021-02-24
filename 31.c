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
    int max = 0, min = 0, input = 0;
    for (int counter = 0; counter <= 10; counter++)
    {
        scanf("%d", &input);
        if (input > max)
        {
            max = input;
        }
        else if (input <= min)
        {
            min = input;
        }
        else
        {
            continue;
        }
    }
}

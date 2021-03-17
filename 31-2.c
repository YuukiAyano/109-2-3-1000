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
    int input = 0, max = 0, min = 0;
    for (int counter = 0; counter < 10; counter++)
    {
        scanf("%d", &input);
        if (counter == 0)
        {
            max = input;
            min = input;
        }
        else
        {
            if (input > max)
            {
                max = input;
            }
            else if (input < min)
            {
                min = input;
            }
            else
            {
                continue;
            }
        }
    }
    printf("Max:%d\nMin:%d", max, min);
    system("pause > nul");
}

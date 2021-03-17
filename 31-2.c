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

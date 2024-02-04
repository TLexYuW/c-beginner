#include <stdio.h>
#include <string.h>

int count_spaces(char *string);

int main(void)
{
    char string[] = "Live life to the fullest";

    int count = count_spaces(string);
    printf("total spaces = %d", count);

    return 0;
}

int count_spaces(char *string)
{
    int len = strlen(string);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        {
            if (string[i] == ' ')
            {
                count++;
            }
        }
    }
    return count;
}

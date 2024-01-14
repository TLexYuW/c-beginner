#include <stdio.h>

int main()
{
    // FILE *pF = fopen("test.txt", "w");
    // fprintf(pF, "Overwrite FILE IO w\n");

    // FILE *pF = fopen("test.txt", "a");
    // fprintf(pF, "Append FILE IO a\n");

    // fclose(pF);

    // if (remove("test.txt") == 0)
    // {
    //     printf("That file was deleted successfully!");
    // }
    // else
    // {
    //     printf("That file was NOT deleted!");
    // }

    FILE *pF = fopen("../../poem.txt", "r");
    // Buffer
    char buffer[255];

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}
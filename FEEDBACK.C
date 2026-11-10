
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[300];

    // Write
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Welcome to C Programming\n");
    fclose(fp);

    // Append
    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Welcome to C Programming\n");
    fclose(fp);

    // Read
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    while (fgets(name, sizeof(name), fp) != NULL)
    {
        printf("%s", name);
    }

    fclose(fp);

    return 0;
}

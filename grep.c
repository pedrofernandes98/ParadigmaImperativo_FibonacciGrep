#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024
FILE *in;
void find(char *string);

int main(int argc, char *argv[])
{

    char *string;

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s string file\n", *argv);
        exit(1);
    }

    string = *++argv;

    if ((in = fopen(*++argv, "r")) == NULL)
    {
        fprintf(stderr, "Cannot Open: %s\n", *argv);
        exit(1);
    }

    find(string);

    printf("Rodei");
    return 0;
}

void find(char *string)
{
    //printf("entrei no find");
    char line[SIZE];
    int count;
    count = 0;
    while (fgets(line, SIZE, in))
    {
        count++;
        //printf(line);
        if (strstr(line, string))
        {
            printf("%5d:\t%s\n", count, line);
        }
    }
}

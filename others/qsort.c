#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compInt(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int compIntRev(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int compStr(const void *a, const void *b)
{
    return strcmp(a, b);
}

void main()
{

    // Number
    int values[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(values) / sizeof(int);
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("\n");

    qsort(values, n, sizeof(int), compInt);

    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("\n");

    // Number rev
    qsort(values, n, sizeof(int), compIntRev);

    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("\n");

    // String

    char names[][20] = {"hasukhs", "knjb", "suaba", "oeihu", "aakaui", "anhs"};
    int m = sizeof(names) / sizeof(names[0]);

    qsort(names, m, 20, compStr);
    for (i = 0; i < m; i++)
        printf("%s\n", names[i]);
}
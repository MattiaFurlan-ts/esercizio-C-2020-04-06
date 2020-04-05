#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void findBruteForce (int *a, int length)
{
    bool *visited = malloc (length * sizeof (bool));
    for (int i = 0; i < length; i++)
    {
        int x = a[i];
        if (!visited[i])
        {
            bool isDuplicate = false;
            for (int j = i + 1; j < length; j++)
            {
                if (x == a[j])
                {
                    isDuplicate = true;
                    visited[j] = true;
                }
            }
            if (!isDuplicate)
                printf ("Element appear only once in array - %d.\n", x);
        }
    }
    free (visited);
}

int main ()
{
    int a[] = {1,5,6,2,1,6,4,3,2,5,3};
    findBruteForce (a, sizeof (a) / sizeof (a[0]));
    return 0;
}

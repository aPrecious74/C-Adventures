#include <stdio.h>
#include <cs50.c>

int main(void)
{

    // loop user if input is -#
    int n;
    do
    {
        n = get_int("Size:");
    } 
    while (n < 1);

    // print a square based on input size
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    printf("\n");
}

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    for (int i = 1; i <= height; i++)
    {
        int spaces = height - i;
        int bricks = i;
        print_row(spaces, bricks);
    }

    return 0;
}

#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void print_bricks(int n);
int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    } while (n < 1);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        print_bricks(n - i);
        print_row(i + 1);
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
void print_bricks(int n) {
    for (int i = 1;i < n;i++) {
        printf(" ");
    }
}
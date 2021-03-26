#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // take correct Height of Pyramid;
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    // move accross rows and columns;
    int row = 1;
    while (row - 1 < height)
    {
        ++row;
        int col = 1;
        while (col + row - 2 <  height)
        {
            ++col;
            printf(" ");
        }
        int l = 1;
        while (l < row)
        {
            printf("#");
            ++l;
        }
        printf("  ");
        int k = 1;
        while (k < row)
        {
            printf("#");
            ++k;
        }
        printf("\n");  // change a row;
    }
}

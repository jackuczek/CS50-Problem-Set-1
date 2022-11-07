#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: "); //Prompts user for height
    }
    while (height < 1 || height > 8); //Will prompt user if input is less than 1 or greater than 8

    for (int row = 0; row < height; row++) //Starts row from 0, and adds row until row equals height
    {
        for (int space = height - row - 1; space > 0; space--) //Starts spaces from the height minus row minus 1, works only if space is greater than 0, and removes one more space each time
        {
            printf(" ");
        }

        for (int block = 0; block < row + 1; block++) //Starts blcoks from 0, continues until block equals number of rows plus 1, adds one more block each time
        {
            printf("#");
        }
        printf("\n");
    }
}
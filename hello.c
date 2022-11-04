#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Asks for name, prints out Hello, [name], with %s as a placeholder for the string's output
    printf("Hello, %s\n", get_string("What's your name? "));
}
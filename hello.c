#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string answer = get_string("What is your name ? ");

    printf("hello, %s\n", answer );
}

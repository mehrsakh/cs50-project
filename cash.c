#include <cs50.h>
#include <stdio.h>

int quarters_calculate(int cents);
int dimes_calculate(int cents);
int nickels_calculate(int cents);
int pennies_calculate(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change own :");
    }
    while (cents < 0);

    int quarters = quarters_calculate(cents);
    cents = cents - (quarters * 25);

    int dimes = dimes_calculate(cents);
    cents = cents - (dimes * 10);

    int nickels = nickels_calculate(cents);
    cents = cents - (nickels * 5);

    int pennies = pennies_calculate(cents);
    cents = cents - (pennies * 1);

    int total = quarters + dimes + nickels + pennies;
    printf("total : %i\n", total);
}

int quarters_calculate(int cents)
{
    return cents / 25;
}

int dimes_calculate(int cents)
{
    return cents / 10;
}

int nickels_calculate(int cents)
{
    return cents / 5;
}

int pennies_calculate(int cents)
{
    return cents / 1;
}

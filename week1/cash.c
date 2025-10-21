#include <cs50.h>
#include <stdio.h>

int get_cent(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pannies(int cents);

int main(void) {

    int cent = get_cent();

    int quarters = calculate_quarters(cent);

    cent = cent - quarters * 25;

    int dimes = calculate_dimes(cent);

    cent = cent - dimes * 10;

    int nickles = calculate_nickles(cent);

    cent = cent - nickles * 5;

    int pannies = calculate_pannies(cent);

    cent = cent - pannies * 1;

    int coins = quarters + dimes + nickles + pannies;

    printf("%i\n", coins);

}

int get_cent(void) {
    int owed;
    do {
        owed = get_int("Change owed: ");
    } while (owed < 0);
    return owed;
}

int calculate_quarters(int cents) {

    return cents / 25;
}
int calculate_dimes(int cents) {

    return cents / 10;
}
int calculate_nickles(int cents) {

    return cents / 5;
}
int calculate_pannies(int cents) {

    return cents / 1;
}
/*A Pre-paid taxi charges from the passenger as per the tariff given below:
distance               Rate
upto 5km               100
for the next 10km      10/km
for the next 10km       8/km
more than 25km          5/km
Write a program to input the distance covered and calculate the amount to be
paid by the passenger. The program displays the printed bill with the details
given below:
Taxi No.         : ________
distance covered : ________
Amount           : ________ */

#include <stdio.h>
int main()
{
    int distance;
    float amount;
    printf("Enter the distance covered: ");
    scanf("%d", &distance);
    if (distance <= 5)
        amount = 100;
    else if (distance <= 15)
        amount = 100 + (distance - 5) * 10;
    else if (distance <= 25)
        amount = 100 + 100 + (distance - 15) * 8;
    else
        amount = 100 + 100 + 80 + (distance - 25) * 5;

    printf("Taxi No. : _______\nDistance Covered: %d\nAmount: %.2f", distance, amount);
    return 0;
}

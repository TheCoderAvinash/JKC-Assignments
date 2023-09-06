/*A cloth showroom has announced festival discounts and the gifts on the purchase of
 items, based on the total cost as given below:
 Total Cost	          Discount	         Gift
 Up to ₹ 2,000	           5%	        Calculator
 ₹ 2,001 to ₹ 5,000   	  10%	        School Bag
 ₹ 5,001 to ₹ 10,000   	  15%	        Wall Clock
 Above ₹ 10,000	          20%	        Wrist Watch
 Write a program to input the total cost. Compute and display the amount to be paid
 by the customer along with the gift. */

#include <stdio.h>
int main()
{
  int cost;
  printf("Enter the Cost: ");
  scanf("%d", &cost);
  if (cost <= 2000)
  {
    cost = cost - (cost / 20); // 5% discount
    printf("Gift: Calculator\n");
  }
  else if (cost <= 5000)
  {
    cost = cost - (cost / 10); // 10% discount
    printf("Gift: School Bag\n");
  }

  else if (cost <= 10000)
  {
    cost = cost - ((15 * cost) / 100); // 15% discount
    printf("Gift: Wall Clock\n");
  }
  else
  {
    cost = cost - (cost / 5); // 20% discount
    printf("Gift: Wrist Watch\n");
  }
  printf("Total Cost: %d\n", cost);
  return 0;
}

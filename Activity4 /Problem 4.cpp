Problem 4: Bulk Purchase Discount

Problem:
Customers get discounts based on how many cups they buy:
1–4 cups: No discount
5–9 cups: 10% discount
10+ cups: 20% discount
Each cup is $1.

Task:

Write a program that:
Ask how many cups the customer wants.
Calculates the total cost with the correct discount.
Outputs the final price.

Sample Input:
How many cups? 7

Sample Output:
Total cost: $6.30

CODE:
#include <iostream>
using namespace std;

int main()
{
    
   int cups;
   double price_per_cup = 1.0;
   double total_cost;
   
   
   cout << "Enter number of cups: ";
   cin >> cups;
   
   if (cups >= 10){
       total_cost = cups * price_per_cup * 0.80; // 20% discount
    
   }
   else if (cups >= 5){
       total_cost = cups * price_per_cup * 0.90; // 10% discount
       
   }
   else{
       total_cost = cups * price_per_cup; // no discount
       
   }
       cout << fixed;
       cout << "Total Cost: " << total_cost << endl;
   
    return 0;
}

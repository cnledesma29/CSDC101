Problem 3: Inventory Check

Problem:
You can only sell lemonade if you have lemons and sugar.

Task:
Write a program that:

Ask the user how many lemons and how many cups of sugar they have.
If either lemons or sugar is 0 or less, 
	output: "You can't make lemonade!"
Otherwise,
	output: "You're ready to sell lemonade!"

Sample Input:
Lemons: 5
Sugar: 0

Sample Output:
You can't make lemonade!
  
CODE:
#include <iostream>
using namespace std;

int main()
{
    
    int lemons, sugar;
    
    cout << "Lemons: ";
    cin >> lemons;
    cout << "Sugar: ";
    cin >> sugar;
    
    if (lemons <= 0 || sugar <= 0){
        cout << "You can't make a lemonade!" << endl;
    }
    else{
        cout << "You can make a lemonade!" << endl;
    }
    return 0;
}

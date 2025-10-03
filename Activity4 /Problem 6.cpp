Problem 6: Switch problem 1 to 5
Combine all problems using switch statement

Sample Input:
What problem do you want to see? 1

Sample Output:
*Basic pricing Decision Runs*

CODE:

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "What problem do you want to see? ";
    cin >> choice;
    
    switch (choice) {
        
        case 1: { // Problem 1: Basic Pricing Decision
        
            double money;
            cout << "Enter your money: ";
            cin >> money;

            if (money >= 1.0) {
                cout << "Enjoy your lemonade!" << endl;
            } else {
                cout << "Sorry, you need more money." << endl;
            }
            break;
        }

        case 2: { // Problem 2: Weather-Based Discounts
        
            double temperature, price;
            cout << "Enter today's temperature in Celsius: ";
            cin >> temperature;

            if (temperature >= 30) {
                price = 0.80;
                cout << "It's hot! The lemonade costs " 
                     << fixed << price << " today." << endl;
            } else {
                price = 1.00;
                cout << "Lemonade costs " 
                     << fixed << price << " today." << endl;
            }
            break;
        }

        case 3: { // Problem 3: Inventory Check
            int lemons, sugar;
            cout << "Lemons: ";
            cin >> lemons;
            cout << "Sugar: ";
            cin >> sugar;

            if (lemons <= 0 || sugar <= 0) {
                cout << "You can't make a lemonade!" << endl;
            } else {
                cout << "You can make a lemonade!" << endl;
            }
            break;
        }

        case 4: { // Problem 4: Bulk Purchase Discount
        
            int cups;
            double price_per_cup = 1.0, total_cost;
   
            cout << "Enter number of cups: ";
            cin >> cups;
   
            if (cups >= 10) {
                total_cost = cups * price_per_cup * 0.80; // 20% discount
            } else if (cups >= 5) {
                total_cost = cups * price_per_cup * 0.90; // 10% discount
            } else {
                total_cost = cups * price_per_cup; // no discount
            }
   
            cout << fixed;
            cout << "Total Cost: " << total_cost << endl;
            break;
        }

        case 5: {  // Problem 5: Player Movement
        
            int x = 0, y = 0;   
            char move;

            cout << "Enter move (W/S/A/D): ";
            cin >> move;
    
            if (move == 'W' || move == 'w') {
                y += 1;
            } else if (move == 'S' || move == 's') {
                y -= 1;
            } else if (move == 'A' || move == 'a') {
                x -= 1;
            } else if (move == 'D' || move == 'd') {
                x += 1;
            } else {
                cout << "Invalid input!" << endl;
            }

            cout << "The location of the player is (" << x << ", " << y << ")" << endl;
            break;   
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}


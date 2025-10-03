Problem 5: Player Movement

Problem:
The player moves depending on the pressed button. Player starts at (0,0).

Task:


Write a program that:
Lets the player change coordinates depending on the button pressed.
W =  0, +1
S = 0, -1
A = -1,0
D = +1,0 

Sample Input:
W


Sample Output:
The location of the player is ( 0, 1)


CODE:
#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;   
    char move;

    cout << "Enter move (W/S/A/D): ";
    cin >> move;

    
    if (move == 'W' || move == 'w') {
        y += 1;
    } 
    else if (move == 'S' || move == 's') {
        y -= 1;
    } 
    else if (move == 'A' || move == 'a') {
        x -= 1;
    } 
    else if (move == 'D' || move == 'd') {
        x += 1;
    } 
    else {
        cout << "Invalid input!" << endl;
        return 0;
    }

    cout << "The location of the player is (" << x << ", " << y << ")" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int number[n];  

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    int minimum = number[0];
    int maximum = number[0];
    int sum = 0;
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (number[i] < minimum) minimum = number[i];
        if (number[i] > maximum) maximum = number[i];

        sum += number[i];

        if (number[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    
    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;

    return 0;
}


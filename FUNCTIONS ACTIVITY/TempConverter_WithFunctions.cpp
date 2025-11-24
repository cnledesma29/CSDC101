#include <iostream>
using namespace std;

float cToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int choice;
    float temperature, convertedTemperature;
    
    cout << "Temperature Converter " << endl;
    cout << "1 - Celsisus to Fahrenheit"<< endl;
    cout << "2 - Fahrenheit to Celsius" << endl;
    cout << "Enter choice (1 or 2)" << endl;
    cin >> choice;
    
    if ( choice == 1){
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = cToFahrenheit(temperature);
        cout << temperature << "°C is " << convertedTemperature << "°F\n";
    }
    else if (choice == 2) {
        cout << "Enter temperature in Farenheit: ";
        cin >> temperature;
        convertedTemperature = fToCelsius(temperature);
        cout << temperature << "°F is " << convertedTemperature << "°C\n";
    }
    else
    cout << "Invalid choice.";

    return 0;
}

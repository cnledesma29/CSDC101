#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int number[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
    cin >> number[n];
    }
    
    int yes = 1;
    for(int i = 0; i < n - 1; i++){
        if(number[n] > number[n+1]){
            yes = 0;
        }
    }
      if (yes == 1)
      cout << "The elemets are in ascending order.";
      
      return 0;
}

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int number[n];
    cout << "Enter elements: ";
      for(int i = 0; i < n; i++){
      cin >> number[i];
    }
    
    int yes = 1;
    for(int i = 0; i < n - 1; i++){
        if(number[n] > number[n+1]){
            yes = 0;
            break;
        }
    }
      if (yes == 1)
         cout << "The elements are in ascending order.";
      else
         cout << "The elements are not in ascending order.";
    
      return 0;
}

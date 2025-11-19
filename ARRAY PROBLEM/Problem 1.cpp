#include <iostream>
using namespace std;

int main(){

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

 int number[n];
 cout << "Enter elements: ";
 for (int i = 0; i < n ; n++){
 cin >> number[n];
 }

int yes = 1, no = 0;
for (int i = 1; i < n - 1; i++){
if (number[i] > number[i + 1]){
no = 0;
  }
}

if(yes == 1)
  cout << "The elements is in ASCENDING order.";
else
  cout << "The element is NOT in ascending order.";

return 0;

}

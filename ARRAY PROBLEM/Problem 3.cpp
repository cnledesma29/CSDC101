#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int last = a[n - 1];

    for(int i = n - 1; i > 0; i--){
        a[i] = a[i - 1];
    }

    a[0] = last;
    cout << "After rotation: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

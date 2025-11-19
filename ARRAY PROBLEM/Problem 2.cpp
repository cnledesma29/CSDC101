#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    double a[n];
    cout << "Enter elements: ";
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    
    double mean = sum / n ;
    cout << "Mean = " << mean << endl;
    
    return 0;
}

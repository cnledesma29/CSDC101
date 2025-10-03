#include <iostream>
using namespace std;

int main()
{

    for (int row1 = 0; row1 <= 8; row1 ++){
        cout<<"*"<<"";
        
    for (int column1 = 1; column1 <= row1; column1++){
        cout<< "*";
    }
    
    cout<<endl;
    }
    
    for (int row2 = 8; row2 >= 0; row2 --){
        cout<<"*"<<"";
        
    for (int column2 = 1; column2 <= row2; column2++){
        cout<< "*";
    }
    
    cout<<endl;
    }
    
    return 0;
    
}

#include <iostream>
using namespace std;

int main()
{
  
    for (int row = 8; row >= 0; row --){
        cout<<"*"<<"";
        
    for (int column = 1; column <= row; column++){
        cout<< "*";
    }
    
    cout<<endl;
    }
    
    return 0;
    
}

and

#include <iostream>
using namespace std;

int main()
{
  
    for (int row = 0; row <= 8; row ++){
        cout<<"*"<<"";
        
    for (int column = 1; column <= row; column++){
        cout<< "*";
    }
    
    cout<<endl;
    }
    
    return 0;
    
}

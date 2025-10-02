#include <iostream>
using namespace std;

int main(){
    
    char choice = 'a';
    
    switch (choice){
        
        case 'a':
          cout<< "A is for apple";
        break;
        
        case 'b':
          cout<< "B is for banana";
        break;
    
        case 'c':
          cout<< "C is for Cantalope";
         break;
         
          default:
            cout<< "FRUIT SALAD";
        break;
    }
    
    
    

    return 0;
}

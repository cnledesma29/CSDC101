#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    
    while(number < 5){
        cout<< "LIKEY number: "<< number << endl;
        number ++;

    }
    
    

    return 0;
}





#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    
    while(number > 0){
        cout<< "LIKEY"<< endl;
        number ++;

    }
    
    

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    char answer;
    
    do{
        cout<< "Do you want to build a snowman? press y for yes and n for no" << endl;
        cin>> answer;
        cout<< "Sing let it go"<< endl;
        
    }
    while (answer != 'n');
    
    cout<< "Ok byee" << endl;
    return 0;
}

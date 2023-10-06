//Odd Numbers From 1 To 100
#include <iostream>
using namespace std;

int main(){
    int i;
    
    cout << "Odd numbers between 1 to 100 : " << endl;
    for (i = 1; i <= 100; i++){
        if (i % 2 != 0)
            cout << i << " ";
    }
    return 0;
}
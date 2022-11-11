//Write a program that reads a positive integer n, and prints the first n even numbers.

#include <iostream>
using namespace std;

int main() {
    
    int PositiveInteger;
    int EvenNumbers;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>PositiveInteger;
    
    for (EvenNumbers=1; EvenNumbers<=PositiveInteger; EvenNumbers++) {
            cout<<EvenNumbers*2<<endl;
        }
    return 0;
}

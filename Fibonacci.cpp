//Fibonacci number is a series of numbers in which each number is the sum of the two preceding numbers. The first two numbers in the series are the number 1.  Write a program to print first n Fibonacci Numbers


#include <iostream>
#include <cstdlib>
using namespace std;

unsigned int fib(int n)
    {
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fib(n-1)+fib(n-2);
}

int main() {
    
    int Integer;
    int x;
    
    cout<<"Please enter a positive integer greater than 1: "<<endl;
    cin>>x;

    if (x > 1) {
        for (Integer = 1; Integer <= x; Integer++) {
                
                cout<<fib(Integer)<<endl;
        }
    }
    
    return 0;
}

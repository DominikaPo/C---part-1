//Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered:
//1)    more evens
//2)    more odds
//3)    same number of evens and odds




#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    int x, y, z, w;
    int o;
    
    cout<<"Please enter 4 positive integers, separated by a space: ";
    cin>>a>>b>>c>>d;
    x = a % 2;
    y = b % 2;
    z = c % 2;
    w = d % 2;
    
    o = x + y + z + w;
    
    if (o < 2)
        cout<<"more evens";
    else if ( o > 2)
        cout<<"more odds";
    else
        cout<<"same number of evens and odds";

    return 0;
}

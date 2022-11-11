//Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that    are equivalent to the given amount.

#include <iostream>
using namespace std;

int main() {
    int dollars, cents;
    int suma, Nquarters, Rquarters, Ndimes, Rdimes, Nnickels, Npennies;
    
    cout<<"Please enter the amount of money to convert: "<<endl;
    
    cin >> dollars;
   
    cin >> cents;
    
    suma = 100*dollars + cents;
    
    Nquarters = suma / 25;
    Rquarters = suma % 25;
    
    Ndimes = Rquarters / 10;
    Rdimes = Rquarters % 10;
    
    Nnickels = Rdimes / 5;
    
    Npennies = Rdimes % 5;
    
    cout<< "The coins are " << Nquarters << " quarters, "<< Ndimes << " dimes, " << Nnickels <<  " nickels and " << Npennies << " pennies"<<endl;
    
    return 0;
    
}

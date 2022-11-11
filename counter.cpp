//Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.

#include <iostream>
using namespace std;

int main(){
    
    int quarters, dimes, nickels, pennies, suma, wynik, reszta;
    
    cin >> quarters;
   
    cin >> dimes;
   
    cin >> nickels;
  
    cin >> pennies;
    
    suma = 25*quarters + 10*dimes + 5*nickels + pennies;
    
    wynik = suma / 100;
    reszta = suma % 100;
    
    cout << "The total is " << wynik << " dollars and " << reszta << " cents"<<endl;
    
    return 0;
}


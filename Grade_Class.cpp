//Write a program that inputs two grades separated by a space.
//If both grades are below a score of sixty then the program should output the message:
//Student Failed:(
//If both grades are greater than or equal to ninety five then the program should output the message:
//Student Graduated with Honors:)
//Otherwise the program should output the message:
//Student Graduated!

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout<<"Please enter 2 grades, separated by a space: ";
    cin>>x>>y;
    if (x < 60 && y < 60)
        cout<<"Student Failed:(";
    else if (x>=95 && y>=95)
        cout<<"Student Graduated with Honors:)";
    else
        cout<<"Student Graduated!";
    return 0;
}


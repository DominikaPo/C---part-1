//Write a program for determining if a year is a leap year. In the Gregorian calendar system you can check if it is a leaper if it is divisible by 4 but not by 100 unless it is also divisible by 400.

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int inputYear;
    inputYear = atoi(argv[1]);

    if (((inputYear % 4 == 0) && (inputYear % 100 != 0)) || (inputYear % 400 == 0))
        cout << argv[1] << " was a leap year\n";
    else
        cout << argv[1] << " was not a leap year\n";

    return 0;
}

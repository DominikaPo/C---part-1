#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double weight, height;
    double BMI, wzrost;
    
    cout<< "Please enter weight in kilograms: "<<endl;
    cin >> weight;
    
    cout<< "Please enter height in meters: "<<endl;
    cin >> height;
    
    wzrost = height*height;
    BMI = weight / wzrost;
    
    cout<< fixed<<endl;
    cout<< setprecision(2)<<endl;
    cout<< "BMI is: " << BMI <<endl;
    
    return 0;
}


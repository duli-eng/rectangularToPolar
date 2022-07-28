#include <iostream>
#include <math.h>
#define PI 3.14159265359
using namespace std;

int main()
{
double realPart, imaginaryPart, angle ;

    cout << "real Part :";
        cin >> realPart;
    cout << "imaginary Part :";
        cin >> imaginaryPart;

           angle = (180/PI)*(atan(imaginaryPart / realPart));

cout << "real Part: "<< realPart << endl;
cout << "imaginary Part: "<< imaginaryPart << endl;
cout << " angle: "<< angle << endl;
cout << " magnitude: "<< sqrt(pow (realPart, 2.0) + pow (imaginaryPart, 2.0));
cin.get(); 

return 0;
}
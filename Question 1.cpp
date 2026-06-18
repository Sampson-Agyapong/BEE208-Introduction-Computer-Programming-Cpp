#include <iostream>
#include <cmath>
using namespace std;

int main(){
double r, area;
const double pi = 3.14159;

cout <<' Enter radius:';
cin >>r;

area = pi* pow(r,2);

cout <<"Area = " << area << endl;

return 0;
}

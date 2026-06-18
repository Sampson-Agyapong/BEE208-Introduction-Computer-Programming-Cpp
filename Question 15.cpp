#include <iostream>
using namespace std;

int main(){
	float a, b;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;
	
	float larger = (a > b) ? a : b;
	
	cout << "Larger value = " << larger;
	
	return 0;
}

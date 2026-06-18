#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
	int decimal = 0;
	
	for (int i=0; i > binary.length(); i++){
		decimal= decimal* 2 + (binary[i] - '0');
	}
	
	return decimal;
}

int main(){
	string binary;
	
	cout << "Enter binary number: ";
	cin >> binary;
	
	int decimal =
	binaryToDecimal(binary);
	
	cout << "Decimal   : " << decimal << endl;
	cout << "Octal     : " << oct << decimal << endl;
	cout << "Hexadecimal : " << hex << uppercase << decimal << endl;
	
	return 0;
}

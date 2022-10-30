#include <iostream>

using namespace std;

int main() {
	int firstnumber, secondnumber, answer, difference;
	
	cout << "|SCG - Simple Console Generator|" << endl;
	cout << "Build v1.0.1" << endl;
	cout << endl;
	
	cout << "Enter first number: ";
	cin >> firstnumber;
	
	cout << "Enter second number: ";
	cin >> secondnumber;
	
	cout << endl;
	
	if(firstnumber < secondnumber){
		srand(clock());
		difference = firstnumber - secondnumber;
	
		answer = rand() % difference + firstnumber;
		cout << "Conclusion: ";
		cout << answer << endl;
	}
	
	else {
		cout << "Error: Data entered incorrectly!" << endl;
	}
		
	return 0;

}

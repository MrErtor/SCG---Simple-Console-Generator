#include <iostream> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

int main() { 
	int firstnumber;
	int secondnumber;
	int answer;
	int difference;
	
	cout << "|SCG - Simple Console Generator| \n";
	cout << "Build v1.0 \n";
	cout << "\n";
	
	cout << "Enter first number: ";
	cin >> firstnumber;
	
	cout << "Enter second number: ";
	cin >> secondnumber;
	
	cout << "\n";
	
	if(firstnumber <= secondnumber){	
		srand(time(NULL)); 
		difference = firstnumber - secondnumber; 
	
		answer = rand() % difference + firstnumber; 
		cout << "Conclusion: ";
		cout << answer << endl; 
	}
	else {
		cout << "Error: Data entered incorrectly!";
	}
		
	return 0;

}
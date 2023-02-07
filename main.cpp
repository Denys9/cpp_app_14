#include <iostream>
#include <ctime>
using namespace std;

void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main() {
	int num1, num2;
	cout << "first number - ";
	cin >> num1;
	cout << "second number - ";
	cin >> num2;
	swap(&num1, &num2);
	cout << "After Swapping, we have observed the following changes" << endl;
	cout << "First number : " << num1 << endl;
	cout << "Second number: " << num2 << endl;
}
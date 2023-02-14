#include <iostream>
using namespace std;


int main() {
	int num1, num2;
	char chaar{};
	cout << "1 number - ";
	cin >> num1;
	cout << "2 number - ";
	cin >> num2;
	int* pnum1 = &num1, * pnum2 = &num2;
	cout << "[ + | - | * | / ] - ";
	cin >> chaar;
	switch (chaar)
	{
	case '+':
	{
		cout << *pnum1 << " + " << *pnum2 << " = " << *pnum1 + *pnum2 << endl;
	}break;
	case '-':
	{
		cout << *pnum1 << " - " << *pnum2 << " = " << *pnum1 - *pnum2 << endl;
	}break;
	case '*':
	{
		cout << *pnum1 << " * " << *pnum2 << " = " << *pnum1 * *pnum2 << endl;
	}break;
	case '/':
	{
		if (*pnum2 == 0)
		{
			cout << "error";
		}
		cout << *pnum1 << " / " << *pnum2 << " = " << *pnum1 / *pnum2 << endl;
	}break;
	default:
		break;
	}
}
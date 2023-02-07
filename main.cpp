#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int* x_ptr = new int(0);
    cout << "Enter x->";
    cin >> *x_ptr;
    if (x_ptr < 0)
    {
        cout << "x_ptr negative" << endl;
    }
    if (x_ptr > 0) 
    {
        cout << "x_ptr positive" << endl;
    }
    if (x_ptr == 0)
    {
        cout << "x_ptr zero" << endl;
    }
    delete x_ptr;
}
#include<iostream> 
using namespace std;

int main()
{
    int* x_ptr = new int(0);
    int* y_ptr = new int(0);
    cout << "Enter x->";
    cin >> *x_ptr;
    cout << "Enter y->";
    cin >> *y_ptr;
    if (x_ptr < y_ptr) 
    {
        cout << *y_ptr << endl;
    }
    if (x_ptr > y_ptr)
    {
        cout << *x_ptr << endl;
    }
       
    
    delete x_ptr;
}
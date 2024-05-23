#include <iostream>
using namespace std;

int main()
{
    cout<< "Please Enter a number: ";
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 0; i<= n; i++){
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}
#include <iostream>
using namespace std;


int main()
{
    /*int a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << "\n";
    cout << "a / b = " << a / b << "\n";
    
    */
    int a = 5, b;
    float c = 5, d;
    
    cin >> b >> d;
    a = a+b - 2;
    cout << a << " " << b << " " << c << " " << d << "\n";
    c = c + 1;
    cout << a << " " << b << " " << c << " " << d << "\n";
    d = c - a + d;
    cout << a << " " << b << " " << c << " " << d << "\n";
    a = a * c;
    cout << a << " " << b << " " << c << " " << d << "\n";
    c = c - 1;
    cout << a << " " << b << " " << c << " " << d << "\n";
    a = a/10;
    cout << a << " " << b << " " << c << " " << d << "\n";
    c = c/2;
    cout << a << " " << b << " " << c << " " << d << "\n";
    b = b - 1;
    cout << a << " " << b << " " << c << " " << d << "\n";
    d = d*(c+b+a);
    cout << a << " " << b << " " << c << " " << d << "\n";
    return 0;
}

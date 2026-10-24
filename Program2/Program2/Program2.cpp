


#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b, c;

    cout << "Hello World!\n";

    cin >> a >> b;

    cout << "Summ: " << sum(a, b) << "\n";

    c = multiply(a, b);

    cout << "Proizvedenie a*b: " << c << "\n";

    cout << "Rebase test\n";
}
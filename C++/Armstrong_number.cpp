#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, n;
    cout << "Following are the armstrong numbers from 1-1000" << endl;
    for (n = 1; n <= 1000; ++n)
    {
        if (n < 10)
        {
            cout << n << " ";
        }
        else
        {
            a = n % 10;
            b = (n % 100 - a) / 10;
            c = (n % 1000 - b) / 100;
            d = ((a * a * a) + (b * b * b) + (c * c * c));
        }
        if (d == n)
            cout << n << " ";
        return 0;
    }
}

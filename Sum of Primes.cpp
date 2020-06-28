#include <iostream>
using namespace std;

bool Prime(int n)
{
    int i;
    bool f= 1;

    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            f=0;
            break;
        }
    }

    return f;
}

int main()
{
    int n, i;
    bool f= 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i)
    {
        if (Prime(i))
        {
            if (Prime(n - i))
            {
                cout << n << " = " << i << " + " << n-i << endl;
                f= 1;
            }
        }
    }

    if (!f)
      cout << n << " Can't be expressed as sum of two prime numbers.";

    return 0;
}

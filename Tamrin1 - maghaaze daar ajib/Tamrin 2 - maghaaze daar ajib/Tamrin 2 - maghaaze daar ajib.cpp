
#include <iostream>
using namespace std;

int main()
{
    long a, k, n , temp;

    cin >> k >> n >> a;

    temp = ((a * (a + 1) / 2) * k) - n;

    if (temp <= 0)
    {
        temp = 0;
    }

    cout << temp;
    return 0;
}


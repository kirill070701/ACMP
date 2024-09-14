#include <iostream>

using namespace std;

int main()
{
    long long a;

    cin >> a;

    if ((a % 10) == 5) {
        a /= 10;
        a = (a + 1) * 100 * a + 25;

    }
    else {
        a *= a;
    }

    cout << a;
}

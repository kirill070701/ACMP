#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long n;
    float result;
    long numberIterations;
    float l;

    cin >> n;

    numberIterations = sqrt(pow(n - 1, 2)) + 1;

    l = sqrt(pow((numberIterations - sqrt(pow(n, 2))) - n, 2));
    
    result = (1 + n) / 2.0 * l;

    cout << result;

}

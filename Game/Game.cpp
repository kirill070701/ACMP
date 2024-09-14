#include <iostream>

using namespace std;

int main()
{
	int k;
	int result;

	cin >> k;

	result = ((k * 10 + 9) * 10 + (9 - k));

	cout << result;
}


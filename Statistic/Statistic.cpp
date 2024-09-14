#include <iostream>

using namespace std;

void String_to_Int(string*, int);

int main()
{
    int N_quanty_day;
    string N_day;

    cin >> N_quanty_day;
    cin >> N_day;

    int data[2][2];

    String_to_Int(&N_day, N_quanty_day);

}

void String_to_Int(string* N_day, int N_quanty_day) {
    for (size_t i = 0; i < N_quanty_day; i++)
    {
        cout << (*N_day)[i];
    }
}

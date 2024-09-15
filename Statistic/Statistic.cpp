#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Even_numbers {
    size_t number;
    struct Even_numbers* next;
};

struct Non_even_numbers {
    size_t number;
    struct Non_even_numbers* next;
};


int main()
{
    size_t quantity_even_day            = 0;
    size_t quantity_non_even_day        = 0;
    size_t quantity_day;
    cin >> quantity_day;

    Even_numbers* N_even_numbers                        = new Even_numbers;
    Non_even_numbers* N_non_even_numbers                = new Non_even_numbers;

    Even_numbers* link_N_even_numbers                   = N_even_numbers;
    Non_even_numbers* link_N_non_even_numbers           = N_non_even_numbers;

    Even_numbers* start_regist_even_numbers             = N_even_numbers;
    Non_even_numbers* start_regist_non_even_numbers     = N_non_even_numbers;

    size_t number_cin;
    
    for (size_t i = 0; i < quantity_day; i++)
    {
        cin >> number_cin;

        if (number_cin % 2 == 0)
        {
            N_even_numbers->number          = number_cin;
            N_even_numbers                  = new Even_numbers;
            link_N_even_numbers->next       = N_even_numbers;
            link_N_even_numbers             = N_even_numbers;

            quantity_even_day++;
        }
        else {
            N_non_even_numbers->number      = number_cin;
            N_non_even_numbers              = new Non_even_numbers;
            link_N_non_even_numbers->next   = N_non_even_numbers;
            link_N_non_even_numbers         = N_non_even_numbers;

            quantity_non_even_day++;
        }
    }

    N_non_even_numbers = start_regist_non_even_numbers;
    N_even_numbers = start_regist_even_numbers;

    for (size_t i = 0; i < quantity_non_even_day; i++)
    {
        cout << N_non_even_numbers->number;
        N_non_even_numbers = N_non_even_numbers->next;
        if (i + 1 != quantity_non_even_day) {
            cout << " ";
        }
    }

    cout << "\n";

    for (size_t i = 0; i < quantity_even_day; i++)
    {
        cout << N_even_numbers->number;
        N_even_numbers = N_even_numbers->next;
        if (i + 1 != quantity_even_day) {
            cout << " ";
        }
    }

    cout << "\n";

    quantity_even_day >= quantity_non_even_day ? cout << "YES" : cout << "NO";
}

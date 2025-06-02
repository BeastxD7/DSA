#include <iostream>

using namespace std;

int main()
{

    int number, start = 1, sum = 0;

    cout << "Enter the Number: " << endl;
    cin >> number;

    while (start <= number)
    {

        if (start % 2 != 0)
        {
            sum += start;
        }

        start++;
    }

    cout << "sum = " << sum << endl;
}
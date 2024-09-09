#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;

    while (cin >> number)
    {
        if (number == "0")
        {
            break;
        };
        int alternatingSum = 0;
        for (int a = 0; a < number.length(); a++)
        {
            if (a % 2 == 0)
            {
                alternatingSum += number[a] - '0';
            }
            else
            {
                alternatingSum -= number[a] - '0';
            }
            // seperate odd and even using +-
        }

        if (alternatingSum % 11 == 0)
        {
            cout << number << " is a multiple of 11." << endl;
        }
        else
        {
            cout << number << " is not a multiple of 11." << endl;
        }
    }

    return 0;
}

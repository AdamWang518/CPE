#include <iostream>
#include <string>
using namespace std;
int f(string n)
{
    int sum = 0;
    for (char c : n)
    {
        sum += c - '0';
    }
    return sum;
}
int main()
{
    string n;
    while (cin >> n)
    {
        if (n == "0")
        {
            break;
        }
        while (1)
        {
            int sum = f(n);
            if (sum >= 10)
            {
                n = to_string(sum);
                continue;
            }
            else
            {
                n = to_string(sum);
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}
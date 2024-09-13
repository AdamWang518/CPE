#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    while (cin >> n)
    {
        string r_n_str = to_string(n);
        reverse(r_n_str.begin(), r_n_str.end());
        int r_n = stoi(r_n_str);

        bool prime = isPrime(n);
        bool rprime = isPrime(r_n);

        if (r_n == n)
        {
            rprime = false;
        }

        if (prime == false && rprime == false)
        {
            cout << n << " is not prime." << endl;
        }
        else if (prime == true && rprime == false)
        {
            cout << n << " is prime." << endl;
        }
        else if (prime == true && rprime == true)
        {
            cout << n << " is emirp." << endl;
        }
        else if (prime == false && rprime == true)
        {
            cout << n << " is not prime." << endl;
        }
    }
    return 0;
}

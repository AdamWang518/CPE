#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    int divisor = 1, f_divisor = 1;
    while (divisor <= a && divisor <= b)
    {
        if (a % divisor == 0 && b % divisor == 0)
        {
            f_divisor = divisor;
        }
        divisor++;
    }
    return f_divisor;
}
int main()
{
    int n, g = 0;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        g = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                g += GCD(i, j);
            }
        }
        cout << g << endl;
    }
    return 0;
}
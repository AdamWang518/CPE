#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for (int n = 0; n < testCase; n++)
    {
        int s, d;
        cin >> s >> d;
        //|a+b|=s
        //|a-b|=d
        // s+d=|a+b|+|a-b|=2a
        // s-d=|a+b|-|a-b|=2b
        if (s + d >= 0 && s - d >= 0 && (s + d) % 2 == 0 && (s - d) % 2 == 0)
        {
            cout << abs(int((s + d) / 2)) << " " << abs(int((s - d) / 2)) << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }

    return 0;
}
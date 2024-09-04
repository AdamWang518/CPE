#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (b <= 1 || a < b)
        {
            cout << "Boring!" << endl;
            continue;
        }
        vector<int> v;
        while (a % b == 0)
        {
            v.push_back(a);
            a = a / b;
        }
        if (a == 1)
        {
            for (int n : v)
            {
                cout << n << " ";
            }
            cout << "1" << endl;
        }
        else
        {
            cout << "Boring!" << endl;
        }
    }
    return 0;
}
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> cost(36, 0);
    bool notFirst = false;
    for (int a = 1; a <= t; a++)
    {
        if (notFirst)
        {
            cout << endl;
        }
        notFirst = true;
        cout << "Case " << a << ":" << endl;

        for (int i = 0; i < cost.size(); i++)
        {
            cin >> cost[i];
        }
        int q;
        cin >> q;
        while (q--)
        {
            int n;
            cin >> n;
            int minVal = 0x7FFFFFFF;
            cout << "Cheapest base(s) for number " << n << ":";
            map<int, int> ans;
            for (int i = 2; i <= 36; i++)
            {
                int currentCost = 0;
                int x = n;
                while (x)
                {
                    int digit = x % i;
                    currentCost += cost[digit];
                    x = x / i;
                }
                ans[i] = currentCost;
                minVal = min(minVal, currentCost);
            }
            for (int i = 2; i <= 36; i++)
            {
                if (ans[i] == minVal)
                {
                    cout << " " << i;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
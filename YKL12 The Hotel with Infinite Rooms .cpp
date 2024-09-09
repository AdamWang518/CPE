#include <iostream>
using namespace std;

int main()
{
    long long s, d;
    while (cin >> s >> d)
    {
        long long totalDays = 0;
        long long size = s;
        while (totalDays < d)
        {
            // total = S day + (S+1) days (S+2) days
            totalDays += size;
            if (totalDays >= d)
            {
                break;
            }
            size++;
        }
        cout << size << endl;
    }
}

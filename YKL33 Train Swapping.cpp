#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test, train;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> train;
        int swapper = 0;
        vector<int> T(train);
        for (int j = 0; j < train; j++)
        {
            cin >> T[j];
        }
        for (int j = 0; j < train - 1; j++)
        {
            for (int k = j + 1; k < train; k++)
            {
                if (T[j] > T[k])
                {
                    int tmp = T[j];
                    T[j] = T[k];
                    T[k] = tmp;
                    swapper++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swapper << " swaps." << endl;
    }
    return 0;
}
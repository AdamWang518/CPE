#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int epochs;
    cin >> epochs;
    int numbers;
    vector<int> Vector;
    vector<int> Label;
    // 計算反轉表，每個整數左側比他大的值的個數即反轉表的該格值
    for (int a = 0; a < epochs; a++)
    {
        cin >> numbers;
        for (int b = 0; b < numbers; b++)
        {
            int i;
            cin >> i;
            Vector.push_back(i);
        }
        for (int b = 1; b < numbers; b++)
        {
            Vector[b];
            int l = 0;
            for (int i = 0; i < b; i++)
            {
                if (Vector[i] > Vector[b])
                {
                    l++;
                }
            }
            Label.push_back(l);
        }
        int times = 0;
        for (int element : Label)
        {
            times += element;
        }
        cout << "Optimal train swapping takes " << times << " swaps." << endl;
        Vector.clear();
        Label.clear();
    }
}
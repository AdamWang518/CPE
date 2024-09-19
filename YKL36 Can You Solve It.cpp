#include <iostream>
using namespace std;

int main()
{
    int t, x1, y1, x2, y2;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        int layer1 = x1 + y1;
        int layer2 = x2 + y2;
        int step1 = (layer1 * (layer1 + 1)) / 2 + x1;
        int step2 = (layer2 * (layer2 + 1)) / 2 + x2;
        cout << "Case " << test + 1 << ": " << step2 - step1 << endl;
        ;
    }
    return 0;
}

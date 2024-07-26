#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    bool isInside = false;
    while (getline(cin, text))
    {
        isInside = false;
        for (char a : text)
        {
            if (a == '\"' && isInside == false)
            {
                cout << "``";
                isInside = true;
                continue;
            }
            else if (a == '\"' && isInside == true)
            {
                cout << "\'\'";
                isInside = false;
                continue;
            }
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

const long long kuti = 10000000, lakh = 100000, hajar = 1000, shata = 100;

void processBangla(long long num)
{
    if (num >= kuti)
    {
        processBangla(num / kuti);
        cout << " kuti";
        num %= kuti;
    }
    if (num >= lakh)
    {
        cout << " " << num / lakh << " lakh";
        num %= lakh;
    }
    if (num >= hajar)
    {
        cout << " " << num / hajar << " hajar";
        num %= hajar;
    }
    if (num >= shata)
    {
        cout << " " << num / shata << " shata";
        num %= shata;
    }
    if (num > 0)
    {
        cout << " " << num;
    }
}

int main()
{
    long long num;
    int case_count = 1;

    while (cin >> num)
    {
        for (int i = 0; i < 4 - to_string(case_count).length(); i++)
        {
            cout << " ";
        };
        cout << case_count << ".";
        if (num == 0)
        {
            cout << " 0";
        }
        else
        {
            processBangla(num);
        }
        cout << endl;
        case_count++;
    }

    return 0;
}

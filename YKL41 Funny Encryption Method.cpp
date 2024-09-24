#include <bitset>
#include <iostream>

using namespace std;

int count_ones_in_binary(int number)
{
    bitset<32> binary_representation(number);
    return binary_representation.count();
}

int main()
{
    int n, m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        int b1 = count_ones_in_binary(m);
        int b2 = count_ones_in_binary(stoi(to_string(m), nullptr, 16));
        cout << b1 << " " << b2 << endl;
    }
    return 0;
}

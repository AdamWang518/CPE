#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		vector<int> v;
		for (int j = 0; j < b; j++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		int vitoHome = v[(int)(v.size() - 1) / 2];
		int total = 0;
		for (int j = 0; j < b; j++)
		{
			total += abs(v[j] - vitoHome);
		}
		cout << total << endl;
	}
	return 0;
}
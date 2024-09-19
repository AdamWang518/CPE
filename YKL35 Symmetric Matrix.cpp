#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, n, count = 1;
	while (cin >> a)
	{
		cout << "Test #" << count << ": ";
		count++;
		vector<vector<int>> v(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> v[i][j];
			}
		}
	}
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	int fieldCount = 1;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}

		vector<vector<int>> v(n, vector<int>(m, 0));

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				char a;
				cin >> a;
				if (a == '*')
				{
					v[i][j] = -1;
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] == -1)
				{
					continue;
				}
				for (int x = -1; x <= 1; x++)
				{
					for (int y = -1; y <= 1; y++)
					{
						int ni = i + x;
						int nj = j + y;
						if (ni >= 0 && ni < n && nj >= 0 && nj < m && v[ni][nj] == -1)
						{
							v[i][j]++;
						}
					}
				}
			}
		}

		if (fieldCount > 1)
		{
			cout << endl;
		}
		cout << "Field #" << fieldCount++ << ":" << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] == -1)
				{
					cout << '*';
				}
				else
				{
					cout << v[i][j];
				}
			}
			cout << endl;
		}
	}

	return 0;
}

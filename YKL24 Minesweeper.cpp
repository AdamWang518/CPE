#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	int fieldCount = 1; // 用来标记是第几个输出场景
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}

		// 创建一个n行m列的矩阵，并初始化为0
		vector<vector<int>> v(n, vector<int>(m, 0));

		// 输入地雷信息
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				char a;
				cin >> a;
				if (a == '*')
				{
					v[i][j] = -1; // -1 表示地雷
				}
			}
		}

		// 计算每个格子周围的雷数
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] == -1)
				{ // 如果当前格子是雷，跳过
					continue;
				}
				// 检查周围的8个方向
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

		// 输出结果
		if (fieldCount > 1)
		{
			cout << endl; // 每个场景之间需要一个空行
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

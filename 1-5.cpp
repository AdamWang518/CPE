#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> lines;
    string line;
    size_t max_len = 0;

    // 讀取所有行
    while (getline(cin, line))
    {
        lines.push_back(line);
        max_len = max(max_len, line.length());
    }

    // 用空格填充每一行，使得所有行的長度一致
    for (string &l : lines)
    {
        l.resize(max_len, ' ');
    }

    // 旋轉句子，因為要轉90度所以從最後的row開始
    for (size_t i = 0; i < max_len; ++i)
    {
        for (int j = lines.size() - 1; j >= 0; --j)
        {
            cout << lines[j][i];
        }
        cout << endl;
    }

    return 0;
}

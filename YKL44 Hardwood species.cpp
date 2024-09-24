#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string line;
    int n;

    // 读取第一行的测试用例数量
    getline(cin, line);
    n = stoi(line);

    bool first_case = true;  // 用来处理输出中的空行

    while (n--) {
        map<string, double> m;
        int total = 0;  // 用来记录树的总数量

        // 跳过测试用例开始前的空行（如果有）
        while (getline(cin, line)) {
            if (line != "") {
                m[line] += 1;  // 第一个树种直接处理
                total++;  // 记录树的总数
                break;
            }
        }

        // 继续读取当前测试用例的树种
        while (getline(cin, line)) {
            if (line != "") {
                m[line] += 1;  // 记录每种树的出现次数
                total++;  // 每读取一棵树，总数加 1
            } else {
                break;  // 遇到空行，结束当前测试用例
            }
        }

        // 如果不是第一个测试用例，输出前加一个空行
        if (!first_case) {
            cout << endl;
        }
        first_case = false;

        // 输出当前测试用例的结果，按字母顺序输出树种和百分比
        for (const auto& a : m) {
            cout << fixed << setprecision(4) << a.first << " " << (a.second / total) * 100 << endl;
        }
    }

    return 0;
}

#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

// 自定義排序函數，根據頻率升序，頻率相同則按ASCII值降序
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second)
        return a.second < b.second; // 按頻率升序排序
    return a.first > b.first;       // 如果頻率相同，按ASCII值降序排序
}

int main(){
    string text;
    bool firstCase = true;
    
    // 讀取多行輸入
    while (getline(cin, text)) {
        // 記錄字符的頻率
        map<int, int> m;
        for (char c : text) {
            m[int(c)]++;  // 記錄每個字符的 ASCII 值及其頻率
        }

        // 將 map 轉換成 vector 來進行排序
        vector<pair<int, int>> freqVector(m.begin(), m.end());

        // 排序，先按頻率升序，再按ASCII降序
        sort(freqVector.begin(), freqVector.end(), compare);

        // 在不同測試案例間插入空行
        if (!firstCase) {
            cout << endl;
        }
        firstCase = false;

        // 輸出結果
        for (auto& entry : freqVector) {
            cout << entry.first << " " << entry.second << endl;  // 輸出ASCII值及其頻率
        }
    }
    
    return 0;
}

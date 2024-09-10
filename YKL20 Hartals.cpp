#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    cin >> T;  // 讀入測試案例的數量
    while(T--){
        int n, p;
        cin >> n >> p;  // 讀入總天數和政黨數
        vector<int> parties;
        for(int i = 0; i < p; i++){
            int h;
            cin >> h;  // 讀入每個政黨的 hartal 週期
            parties.push_back(h);
        }

        // 代表每一天是否是 hartal day，索引從 1 到 n
        vector<int> hartalDays(n + 1, 0);  
        int sum = 0;

        for(int i : parties){
            for(int j = i; j <= n; j += i){  // 找出每個政黨的 hartal 日
                // 根據從星期天開始，忽略星期五（第6天）和星期六（第7天）
                if((j % 7 != 6) && (j % 7 != 0)){ 
                    hartalDays[j] = 1;  // 標記為 hartal
                }
            }
        }

        // 計算 hartal 日的總數
        for(int i = 1; i <= n; i++){
            if(hartalDays[i] == 1){
                sum++;
            }
        }

        cout << sum << endl;  // 輸出結果
    }
    return 0;
}

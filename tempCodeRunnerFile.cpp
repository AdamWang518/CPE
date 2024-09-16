#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool sortRule(pair<char,int> a, pair<char,int> b) {
	if(a.second == b.second){
		return a.first<b.first;
	}
    return a.second > b.second;
}

int main(){
    int n;
    string text, tempText;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, tempText);
        text += tempText;
    }
    map<char, int> m;
    for(char c : text) {
        if (toupper(c) >= 'A' && toupper(c) <= 'Z') {
            m[toupper(c)]++;
        }
    }
    vector<pair<char,int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), sortRule);
    for (auto& p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

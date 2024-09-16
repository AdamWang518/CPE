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
	
    string n;
    string text, tempText;
    getline(cin, n);
    for(int i = 0; i < stoi(n); i++) {
        getline(cin, tempText);
        text += tempText;
    }

    map<char, int> m;
    
   	for(char c : text) {
		char upperC = toupper(c);
		if (upperC >= 'A' && upperC <= 'Z') {
		    m[upperC]++;
		}
	}

    vector<pair<char,int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), sortRule);
    for (auto& p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

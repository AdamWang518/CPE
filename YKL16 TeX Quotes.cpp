#include<iostream>
using namespace std;
int main(){
	string a;
	bool isOdd=true;//全局計算
	while(getline(cin,a)){
		for(char n:a){
			if(n=='\"'&&isOdd==true){
				isOdd=false;//t->f
				cout<<"``";
			}
			else if(n=='\"'&&isOdd==false){
				isOdd=true;//f->t
				cout<<"\'\'";
			}
			else{
				cout<<n;
			}
		}
		cout<<endl;
	}
	return 0;
}
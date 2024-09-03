#include<iostream>
using namespace std;
int main(){
	int v,t;
	while(cin>>v>>t){
		int a=v/t;
		int x=v*(2*t)+(1/2)*a*(2*t)*(2*t);
		cout<<x<<endl;
	} 
}
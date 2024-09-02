#include<iostream>
#include<algorithm>
using namespace std;
int n,m,array[10000];
bool sortRule(int x,int y){
	if(x%m!=y%m){
		return (x%m)<(y%m);
	}
	else{
		if((x % 2) * (y % 2)){
			return x>y;
		}
		else if(x%2==0&&y%2==0){
			return x<y;
		}
		else return (x%2);
	}
}
int main(){
	while(cin>>n>>m){
		cout<<n<<" "<<m<<endl;
		if(n==0){
			return 0;
		}
		for(int a=0;a<n;a++){
			cin>>array[a];
		}
		sort(array,array+n,sortRule);
		for(int a=0;a<n;a++){
			cout<<array[a]<<endl;
		}
	}
	return 0;
}
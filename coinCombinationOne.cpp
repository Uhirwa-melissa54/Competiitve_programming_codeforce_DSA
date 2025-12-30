#include <bits/stdc++.h>
using namespace std;
int ways(int n){
	if(n==1){
		return 0;
	}
	if(n==0||n==3||n==2){
		return 1;
	}
	if(n< 0){
		return 0;
	}
	else{
		return ways(n-5)+ways(n-3)+ways(n-2);
	}
	
}
int main(){
	int t;
	cin >> t;
	int n;
	cin >> n;
	int result=ways(n);
	cout<< result;
	
}


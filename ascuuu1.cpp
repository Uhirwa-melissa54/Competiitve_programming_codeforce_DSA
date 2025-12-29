#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c;
	vector<int>v1;
	cin >> a >>b >>c;
	v1.push_back(a);
	v1.push_back(b);
	v1.push_back(c);
	sort(v1.begin(),v1.end());
	if((v1[2] - v1[0]) > 10){
		cout << "check again";
	}
	else{
		cout <<"final"<< v1[1];
	}
	
}

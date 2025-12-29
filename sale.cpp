#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	vector<int>v1;
	for(int i=0; i < n; i++){
		int a;
		cin >> a;
		v1.push_back(a);
	}
	sort(v1.begin(),v1.end());
	int j=0;
	int sum=0;
	while(m>0 && v1[j]<0){
		sum+=abs(v1[j]);
		j++;
		m--;
		
	}
	cout << sum;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	string c;

	cin>> a;
	cin >>b;
	string z=a+b;
	cin >> c;
	sort(z.begin(),z.end());
	sort(c.begin(),c.end());
	if(z==c){
		cout << "YES";
	}
	else{
		cout <<"NO";
	}
}

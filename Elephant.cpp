#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t > 0){
		int a,b;
		cin >> a >> b;
		int minimum=min(a,b);
		if(minimum>=2){
			for(int i=1; i<minimum; i*2){
				cout  << i;
				for (int j=2; j<b; j*2){
					cout << j;
				}
			}
			
		}
		
	}
}



#include <bits/stdc++.h>
using namespace std;
bool check2026(string s){
	auto it=find(s.begin(),s.end,6);
	int index6=null;
	if(it!=s.end() ){
	index6= distance(s.begin(),it);
		
	}
	else{
		index6=null;
	}
	if(index6!=null & s[index6-1]==2 && s[index6-2]==0 && s[index[6-3]==2]){
		return true;
	}
	else{
		return false;
	}
}
bool check2025(string s){
	auto it=find(s.begin(),s.end(),5);
		int index6=null;
	if(it!=s.end() ){
	index6= distance(s.begin(),it);
		
	}
	else{
		index6=null;
	}
	if(index6!=null & s[index6-1]==2 && s[index6-2]==0 && s[index[6-3]==2]){
		return true;
	}
	else{
		return false;
	}

}
int main(){
	string s;
	cin >> s;
	bool answer1=check2026(s);
	bool answer2=check2025(s);
	if(answer1!=true && answer2){
		cout << 1;
	}
	else{
		cout <<0;
		
	}
	
	
}

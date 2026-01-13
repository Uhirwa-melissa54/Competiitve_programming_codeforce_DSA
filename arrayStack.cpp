#include <bits/stdc++.h>
using namespace std;
void pop(int*& arr,int& n){
	int* newArr=new int[n-1];
	for(int i=0; i < n-1; i++){
		newArr[i]=arr[i];
	}
	delete[] arr;
	arr=newArr;
	n--;
	
}
using namespace std;
int main(){
	int n;
	cin >>n;
	int* arrayNum=new int[n];
	for(int i=0; i < n; i++){
		int a;
		cin >> a;
		arrayNum[i]=a;
	}
	pop(arrayNum, n);
	cout << n<<"\n";
	for(int i=0; i < n;i++){
		cout << arrayNum[i]<<"\n";
	}
	
}

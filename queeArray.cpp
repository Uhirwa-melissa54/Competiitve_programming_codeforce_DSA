#include <bits/stdc++.h>
using namespace std;
void deqeue(int*& arr,int& n){
	int* newArr=new int[n-1];
	for(int i=1;i <n;i++){
		newArr[i-1]=arr[i];
	}
	n--;
	delete[] arr;
	arr=newArr;
}
void enqeue(int*& arr,int& n,int a){
    int *newArr=new int[n+1];
    for(int i=0;i <n;i++){
		newArr[i]=arr[i];
	}
	newArr[n-1]=a;
	delete[] arr;
	arr=newArr;
	n--;
    
}
int main(){
	int n;
	cin >> n;
	int* arr=new int[n];
	for(int i=0;i <n;i++){
		int a;
		cin >> a;
		arr[i]=a;
	}
	deqeue(arr,n);
	cout << n <<"\n";
	for(int i=0; i < n;i++){
		cout << arr[i]<<"\n";
	}
	/*int a;
	cin >> a;
	enqeue(arr,n,a);
/*	cout << n <<"\n";*/
	for(int i=0; i < n;i++){
		cout << arr[i]<<"\n";
	}*/
	
	
}

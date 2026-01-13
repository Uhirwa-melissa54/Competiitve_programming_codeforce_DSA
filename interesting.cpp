#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>v1,int left,int right,int target){
   
    if (left > right) return -1;
     int mid=(left+right)/2;
    if(target==v1[mid]){
        return mid;
    }

    if(target > v1[mid]){
        return binarySearch(v1,mid+1,right,target);
    }
    else if(target < v1[mid]){
       return  binarySearch(v1,left,mid-1,target);
        
    }
    else{
        return -1;
    }

}
int main(){
    vector<int>barsPrices;
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int a;
        cin >> a;
        barsPrices.push_back(a);
    }
    sort(barsPrices.begin(),barsPrices.end());
    int m;
    cin >> m;
    for(int i=0; i <m; i++){
        int a;
        cin >> a;
       int result= binarySearch(barsPrices,0,n-1,a);
       if(result==-1){
           cout << 0 <<"\n";
       }
       else{
           cout<<result+1<<"\n";
       }
        
        
    }
    
}

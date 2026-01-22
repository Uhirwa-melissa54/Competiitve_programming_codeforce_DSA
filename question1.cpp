#include <bits/stdc++.h>
using namespace std;
int findLastZero(vector<int>v1, int size){
    int lastZeroPosition=-1;
    auto it=find(v1.begin(),v1.end(),2);
    for(int i=0; i < size; i++){
         it=find(v1.begin(),v1.end(),0);
    }
    if(it!=v1.end()){
    lastZeroPosition=distance(v1.begin(),it);
    }
    return lastZeroPosition;
}
int findFirstOne(vector<int>v1,int size){
    int firstOnePosition=-1;
    auto it=find(v1.begin(),v1.end(),1);
    if(it!=v1.end()){
        firstOnePosition=distance(v1.begin(),it);
    }
    return firstOnePosition;
    
    
}
int main(){
    int firstOne=-1;
    int t;
    cin>> t;
    for(int i=t; i > 0; i--){
        int n;
        cin >> n;
        vector<int>v1;
        for(int i=0; i < n; i++){
            int a;
            cin >> a;
            v1.push_back(a);
        }
    
    
    int lastZero=0;
    lastZero=findLastZero(v1,n);
    firstOne==findFirstOne(v1,n);
    if(firstOne==-1 || lastZero==-1){
        cout << "Bob"<<"\n";
    }
    else if(firstOne >  lastZero){
         cout << "Bob"<<"\n";
    }
    else if(firstOne < lastZero){
        cout <<"Alice"<<"\n"<<firstOne <<" "<<lastZero <<"\n";
        
    }
    else{
        cout << "what a case";
    }
    }
    
}

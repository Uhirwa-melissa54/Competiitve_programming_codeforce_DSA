#include <iostream>
#include <vector>
#include <tuple>

using namespace std;
int main(){
    
    int n;
    cin >> n;
    vector<tuple<int,int,int>>v1;
    for(int i=0; i < n;i++){
        int a,b,c;
        cin >> a >> b>>c;
        
        v1.push_back(make_tuple(a,b,c));
        
    }
    int firstPosition=0;
    int secondPosition=0;
    int thirdPosition=0;
    for(int i=0;i < n; i++){
        firstPosition+=get<0>(v1[i]);
        secondPosition+=get<1>(v1[i]);
        thirdPosition+=get<2>(v1[i]);
        
    }
    if(firstPosition==0 && secondPosition==0 && thirdPosition==0){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
}

#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v1;
    int n,l;
    cin >> n >> l;
    for(int i=0; i < n; i++){
        int b;
        cin >> b;
        v1.push_back(b);
    }
    sort(v1.begin(),v1.end());
    double difference=0;
    double differenceBeginning=0;
    double differenceEnd=0;
    double finalDifference=0;
    differenceBeginning=v1[0]-0;
    differenceEnd=l-v1[n-1];
    for(int i=0;i < n-1;i++){
        
        difference=v1[i+1]-v1[i];
        finalDifference=max(difference,finalDifference);
        
        
    }
    if((finalDifference/2) < differenceBeginning && differenceBeginning >=differenceEnd){
        cout <<fixed << setprecision(10)<<differenceBeginning;
    }
    else if((finalDifference/2) < differenceEnd && differenceBeginning < differenceEnd){
        cout <<fixed << setprecision(10)<<differenceEnd;
    }
    else{
        cout <<fixed << setprecision(10)<<finalDifference/2;
    }
    
    
}

#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
int countUppercase(string name){
    int count=0;
    for(int i=0; i < name.size(); i++){
        if(name[i]==toupper(name[i])){
         count++;
        }
        
    }
    return count;
    
}
int countLowercase(string name){
   int  count=0;
    for(int i=0; i < name.size(); i++){
        if(name[i]==tolower(name[i])){
         count++;
        }
        
    }
    return count;
    
}
int main(){
    string name;
    cin >> name;
    int upperCase=countUppercase(name);
    int lowerCase=countLowercase(name);
    if(lowerCase >= upperCase){
        transform(name.begin(),name.end(),name.begin(),::tolower);
    }
    else if(upperCase > lowerCase){
        transform(name.begin(),name.end(),name.begin(),::toupper);
        
    }
    cout << name;
    
}

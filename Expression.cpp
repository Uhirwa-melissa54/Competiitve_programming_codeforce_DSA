#include <iostream>
#include <algorithm>
#include <initializer_list>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >>b >>c;
    int answer1=a+b+c;
    int answer2=(a+b)*c;
    int answer3=a+(b*c);
    int answer4=a*(b+c);
    int answer5=(a*b)+c;
    int answer6=a*b*c;
    int result=max({answer1,answer2,answer3,answer4,answer5,answer6});
    cout <<result;
    
}












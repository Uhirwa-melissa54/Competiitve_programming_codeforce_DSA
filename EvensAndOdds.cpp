// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    long long sizeOdd=n-(n/2);
    long long  sizeEven=n/2;
    if( k <=sizeOdd){
        cout << k+k-1;
    }
    else {
        cout << (k-sizeOdd)*2;
    }

    return 0;
}

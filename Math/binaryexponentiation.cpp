#include "bits/stdc++.h"
using namespace std;

//binaryexponentition
//binpow 
// O(log b) time

int pw(int a,int b,int m) {
    if(b==0) {
        return a%m;
    } 
    if(b%2==0) {
        int t = pw(a,b/2,m);
        return (1ll * t * t % m);
    } else {
        int t = pw(a,(b-1)/2,m);
        t = (1ll * t * t) % m;
        return (1ll * a * t % m);
    }
}
int main() {

    int a,b,m;
    a=3,b=4,m=5;
    cout<<pw(a,b,m);
}
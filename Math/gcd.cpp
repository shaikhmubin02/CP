#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    
    //euclidean algorithm for gcd
    // gcd(a,b)==gcd(b%a,a);
    // tc = O(log (max(a,b)));

    if(a==0) {
        return b;
    }
    return gcd(b%a,a);
}

int main() {

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";

    //prebuilt-library

    cout<<__gcd(a,b);


}
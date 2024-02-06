#include<bits/stdc++.h>

using namespace std;

// e+e=e
// o+o=e
// e+o=o
// o+e=o

// e*e=e
// e*o=e 
// o*o=o

//formulas : 
// addition : (a+b)%m = ((a%m) + (b%m))%m 
// multiplication : (a*b)%m = ((a%m) * (b%m))%m 
// subtraction : (a+b)%m = ((a%m) - (b%m) + m)%m;

int main() {

    int n;
    cin>>n;
    int M = 47;
    long long fact = 1;
    for(int i=2; i<=n; ++i) {
        fact = (fact*i) % M;
    } 
    cout<<fact;
    
}
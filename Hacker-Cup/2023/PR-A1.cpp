#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long

using namespace std;

void Go() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void solve(int tc) {
    
    int s,d,k;
    cin>>s>>d>>k;
    
    int x = (s*1) + (d*2);
    int y = (s*2) + (d*2);
    if(x>=k && y>=k+1) {
        cout<<"Case #"<<tc<<": "<<"YES"<<"\n";
    } else {
        cout<<"Case #"<<tc<<": "<<"NO"<<"\n";
    }
}

int main() {
    
    Go();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    
}
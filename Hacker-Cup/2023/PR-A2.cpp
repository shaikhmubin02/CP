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
    
    ll a,b,c;
    cin>>a>>b>>c;
    
    // failed some test cases

    //sol 1 
    ll q = c/a;
    ll ans1 = q;
    
    // sol 2
    ll w = c/b;
    ll ans2 = 2*w-1;
    
    // sol 3
    ll d = w;
    ll leftd = c-(w*b);
    ll s = leftd/a;
    ll m = s*1+d*2;
    ll p = s*2+d*2;
    
    ll ans3=0;
    if(m<p) {
        ans3=m;
    } else {
        ans3 = p-1;
    }
    
    // sol 4
    
    ll ss = q;
    ll lefts = c-(q*a);
    ll dd = lefts/b;
    ll mm = ss*1+dd*2;
    ll pp = ss*2+dd*2;
    
    ll ans4=0;
    if(mm<pp) {
        ans4=mm;
    } else {
        ans4 = pp-1;
    }
    ll anss = max(max(ans1,ans2),max(ans3,ans4));
    cout<<"Case #"<<tc<<": "<<anss<<"\n";

    
}

int main() {
    
    Go();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    
}
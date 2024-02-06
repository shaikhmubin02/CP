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

void solve() {
    
    //start here 
    char c;
    set<char> s;
    while(c!='}') {
        cin>>c;
        if(isalpha(c)) {
            s.insert(c);
        }
    }
    cout<<s.size();
}

int main() {
    
    Go();
    int t;
    t=1;
    while(t--) {
        solve();
    }
    
}
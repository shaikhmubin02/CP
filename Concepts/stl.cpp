#include<bits/stdc++.h>

using namespace std;

int main() {

    // Pair Container 
    cout<<"pair \n";
    pair<int,int> p = {1,2}, q = {3,4};
    cout<<(p>q)<<"\n";
    cout<<p.first<<" "<<p.second<<"\n";

    // Vector 
    cout<<"vector \n";
    vector<int> c[10]; // not correct 
    vector<int> v(10); // correct (initially all are zero)

    // it also print the array values
    v.push_back(11);
    v.push_back(12);
    v.pop_back();
    v.insert(v.begin(),5);

    for(auto i : v) {
        cout<<i<<" ";
    }
    cout<<"\n";

    vector<pair<int,int>> V = {{1,2}, {2,3}, {3,4}};
    for(auto i : V) {
        cout<<i.first<<" "<<i.second<<"\n";
    }

    //structured binding (use for c++17 ans above)
    // for(auto [a,b] : V) {
    //     cout<<a<<" "<<b<<"\n";
    // }

    // Set Container 
    cout<<"set \n";
    set<int> s = {1,2,9,4,4,6,6,7,-1};
    // tc = O(log(n))
    for(auto i : s) { //remove the duplicate values ans sort in asd/des
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<s.count(7)<<"\n";

    // Binary Search inbuilt
    cout<<"binary search \n";

    vector<int> bs = {1,2,3,4,5,6,7,8};

    cout<<binary_search(bs.begin(), bs.end(),54)<<"\n";
    // lb : first value >= target
    // up : first value > target 
    // returns iterator
    // never use lb & ub for set and map 

    cout<<*lower_bound(bs.begin(), bs.end(), 4)<<"\n";
    cout<<*lower_bound(bs.begin(), bs.end(), 5)<<"\n";

    cout<<*upper_bound(bs.begin(), bs.end(), 5)<<"\n";

    // for index 
    cout<<lower_bound(bs.begin(), bs.end(), 4) - bs.begin()<<"\n";
    cout<<lower_bound(bs.begin(), bs.end(), 5) - bs.begin()<<"\n";

    cout<<upper_bound(bs.begin(), bs.end(), 5) - bs.begin()<<"\n";









}
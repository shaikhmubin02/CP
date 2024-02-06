#include<iostream>
#define rep(i,n) for(int i=0; i<(int)(n); i++)

using namespace std;

int binarySearch(int arr[], int n, int k) {

    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e) {

        if(arr[mid]==k) {
            return mid;

        } else if(k>arr[mid]) {
            s=mid+1;
        } else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}

int main() {

    int n;
    cin>>n;

    int a[n];
    rep(i,n) {
        cin>>a[i];
    }
    int key;
    cin>>key;
    
    cout<<binarySearch(a,n,key);
    
}
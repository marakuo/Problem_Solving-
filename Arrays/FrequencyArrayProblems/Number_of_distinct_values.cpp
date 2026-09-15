#include <bits/stdc++.h>
using namespace std;

int main() {
 int n; cin>>n; // 1 -> 100
    int arr[n+1], freq[101]={};
    for (int i =1; i<=n; i++) {
        cin>>arr[i];
        freq[arr[i]]++;

    }
    int ctr=0;
    for (int i =1 ; i <=100;i++) {
        if (freq[i]==1) {ctr++;}
    }
    cout<<"The number of distinct values is: "<<ctr<<endl;
    return 0;
}

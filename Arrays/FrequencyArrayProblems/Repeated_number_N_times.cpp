#include <bits/stdc++.h>
using namespace std;

int main() {
 int n; cin>>n; // 1 -> 1000
    int arr[n+1], freq[1001]={};
    for (int i =1; i<=n; i++) {
        cin>>arr[i];
        freq[arr[i]]++;

    }
    int mx=1, max_number=0;
    for (int i =1; i<=1000; i++) {
        if (freq[i]>mx) {mx=freq[i]; max_number=i;}

    }
    cout<<"the most repeated number is "<<max_number<<" repeated "<<mx<<" times"<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;cin>>n;
    int arr[n+1], freq[101]={};
    for (int i=1;i<=n;i++) {
        cin>>arr[i];
        freq[arr[i]]++;

    }
    for (int i=1;i<=100;i++) {
        if (freq[i] > 0)
            cout << i << " -> " << freq[i] << '\n';
    }


    return 0;
}

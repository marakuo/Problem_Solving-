#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int t, n; cin>>t;
    while (t--) {
        int mn =INT_MAX;
        cin>>n;
        int arr[n+1];
        for (int i =1; i <=n ;i++) {
            cin>>arr[i];
        }
        for (int i =1; i<=n;i++) {
            for (int j = i+1; j<= n;j++) {
                int val = arr[i] + arr[j] + j - i;
                mn =min(mn,val);
            }
        }
        cout<<mn<<endl;


    }
    return 0;
}

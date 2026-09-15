#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ll n, num, pos; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>num;
    for(ll i=0;i < n;i++) {
        if (arr[i]==num) {
            pos =i;
            break;
        }else {
            pos = -1;
        }


    }
    cout<<pos<<endl;


    return 0;
}

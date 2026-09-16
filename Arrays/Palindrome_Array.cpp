#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n; cin>>n;
    bool isPalindrome =true;
    ll arr[n];
    for (ll i =0; i < n ; i++) {
        cin>>arr[i];

    }
   for (ll i =0 ; i < n/2 ; i++) {
       if (arr[i] != arr[n-1-i]) {isPalindrome = false; break;}

   }
    cout <<(isPalindrome ?"YES" : "NO")<<endl;





    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n , sum =0; cin>>n;
    string result; cin>>result;
  // converting string char into int
    for(int i=0;i<n;i++) {
        sum+=result[i] - '0';
    }
cout<<sum<< endl;
    return 0;
}

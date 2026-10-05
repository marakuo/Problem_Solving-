#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int n, mn=INT_MAX, ctr =0; cin>>n;
    int arr[n];
    for (int i=0; i <n;i++) {
        cin>>arr[i];
        if (arr[i]<mn) {mn=arr[i]; ctr =1;}
        else if(arr[i] == mn) ctr++;



    }
    if(ctr % 2 ==0) cout<<"Unlucky"<<endl;
    else cout<<"Lucky"<<endl;


    return 0;
}

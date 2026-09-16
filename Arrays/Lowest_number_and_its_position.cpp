#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n; cin>>n;
    int arr[n];
    for (int i =0; i < n ; i++) {
        cin>>arr[i];

    }
    int mn = arr[0], pos =0;
    for (int i =0; i < n ; i++) {
        if (arr[i] < mn) { mn = arr[i]; pos =i;}
    }
    cout<<mn<<" "<<pos + 1<<endl;






    return 0;
}

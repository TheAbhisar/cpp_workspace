#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int sum=0, n,m;
    string give;
    cin>>n>>m;
    vector<int> cash(n);
    for(int i=0; i<n; i++) {
        cin>>cash[i];
    }
    sort(cash.begin(), cash.end());
    for(int i=0; i<n; i++) {
        sum+=cash[i];
        if(sum==m) {
            give = "Yes";
            break;
        }
        else{
            give= "No";
        }
    }
    cout<<give<<endl;
}
    return 0;
}
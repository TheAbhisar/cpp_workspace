#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int n,m;
    cin>>n>>m;
    vector<int> jobs(n+1);
    for(int i=0; i<=n; i++) {
        jobs[i]=0;
    }
    vector<int> chef;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        jobs[x]=x;
    }
    for(int i=1; i<=n; i++) {
        if(jobs[i]==0)
        chef.push_back(i);
    }
    for(int i=0; i<chef.size(); i+=2) {
        cout<<chef[i]<<" ";
    }
    cout<<endl;
    for(int i=1; i<chef.size(); i+=2) {
        cout<<chef[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}
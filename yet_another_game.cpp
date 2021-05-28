#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
 cin>> t;
while(t--) {
    int n;
    cin>>n;
    string winner= "BOB";
    if(n%2==0) 
    winner = "ALICE";
    cout<<winner<<endl;
}
    return 0;
}
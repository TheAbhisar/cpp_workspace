#include<bits/stdc++.h>
using namespace std;
int main() {
vector<int> vect;
int t;
cin>>t;
while(t--) {
int n;
cin>>n;
vect.push_back(n);

}
sort(vect.begin(), vect.end());
for (int i : vect)
cout<<i<<endl;
    return 0;
}
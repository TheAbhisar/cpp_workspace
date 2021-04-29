#include<bits/stdc++.h>
using namespace std;
int main() {
int t,count=0,len,n;
cin>>t;
while(t--) {
    string s,s1,s2;
    cin>>s;
    len= s.length();
    s1= s.substr(0,len/2);
    n=len%2==0?len/2:(len/2)+1;
s2= s.substr(n,len/2);
if(s1.length() != s2.length()) {
cout<<"NO"<<endl;
continue;
}
else {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i=0; i<s1.length(); i++) {
        if(s1[i]==s2[i])
        count++;
        else {
        cout<<"NO"<<endl;
        break;
        }
    }
}
if (count==s1.length())
cout<<"YES"<<endl;
count=0;
}
    return 0;
}
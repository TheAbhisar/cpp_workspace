#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
long long r;
cin>>r;
long long x1,x2,x3,y1,y2,y3;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
int flag1,flag2,flag3;
if((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) <= (r*r))
flag1=1;
else
flag1=0;
if((x1-x3)*(x1-x3) + (y1-y3) * (y1-y3) <= r*r)
flag2=1;
else
flag2=0;
if((x2-x3) * (x2-x3) + (y2-y3)* (y2-y3)  <= r*r)
flag3=1;
else
flag3=0;
string result="no";
if((flag1==1 && flag2==1)||(flag2==1&&flag3==1)||(flag1==1&&flag3==1))
result="yes";
else if(flag1==1 || flag2==1 || flag3==1)
result="no";

cout<<result<<endl;
}
    return 0;
}
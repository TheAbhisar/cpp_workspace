#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    int array1[3];
int a,b,c;
 while (t--) {
cin>>a;
cin>>b;
cin>>c;
array1[0]=a;
array1[1]=b;
array1[2]=c;
sort(array1, array1+3, greater<int>());
cout<<array1[1]<<endl;
 }
 return 0;   
}
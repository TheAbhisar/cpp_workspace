#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while(t--) {
 int x;
 cin>>x;
string temp;
cin>>temp;
 string citizen;
for(int j=0; j<temp.length(); j++) {
    if(temp[j]=='I') {
        citizen="INDIAN";
        break;
}
    else if(temp[j]=='Y'){
        citizen="NOT INDIAN";
}
}
if(citizen!="INDIAN" && citizen!="NOT INDIAN") {
    citizen="NOT SURE";
}
cout<<citizen<<endl;
//endofwhile
    }
    return 0;
}
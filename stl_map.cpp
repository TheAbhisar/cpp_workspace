#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
map <string, char> grade;
grade ["abhisar"]   = 'A';
//cout<<"grade for abhisar is: "<<grade["abhisar"];
//cout<<endl;
map<char,int> count;
string s= "abhisar waghmare";

for (char c : s) {
if(c != ' ')
count[c]++;
}
cout<<count.size()<<"\n";
auto it = count.begin();
    for(it = count.begin(); it!= count.end();it++) {
        cout<<it->first<<"-frequency =  "<<it->second<<"\n";
     }

    return 0;
}
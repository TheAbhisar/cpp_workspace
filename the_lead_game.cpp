#include<bits/stdc++.h>
using namespace std;
int main() {
 int w,l,score_si=0,score_ti=0,n,si=0,ti=0;
 cin>>n;
 while(n--) {
     cin>>si;
     cin>>ti;
score_si=score_si+si;
score_ti=score_ti+ti;

 }
 if(score_si>score_ti){
     l=score_si-score_ti;
     w=1;
 }
 else if(score_ti>score_si) {
     l=score_ti-score_si;
     w=2;
 }
 cout<<w<<l<<endl;
 return 0;
}
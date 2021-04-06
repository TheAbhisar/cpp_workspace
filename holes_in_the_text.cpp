#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    // your code goes here
    int t ,i , count = 0 ;
    cin>> t ;
    string word ;
    while(t)
    {
    cin >> word;
    for(i=0;i<word.length();i++)
    {if(word[i]=='A'||word[i]=='D' ||word[i]=='O'||word[i]=='P'||word[i]=='Q'||word[i]=='R')
    count++ ; 
      else if( word[i]=='B')
      count+=2;
    }
    cout<< count <<endl ;
    count= 0 ;
    t-- ;
    }
    return 0;
}
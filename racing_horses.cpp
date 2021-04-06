#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[1000000000];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int min =abs(s[0]-s[1]);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                if(abs(s[i]-s[j])<min)
                {
                    min=abs(s[i]-s[j]);
                }
            }
        }
       cout<<min<<endl;
    }
    return 0;
}
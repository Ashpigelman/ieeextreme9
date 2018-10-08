#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[26];
int b[26];
int main() 
{
    std::ios_base::sync_with_stdio (false);
    int t;
    cin >> t;
    while(t--)
    {
        int a[26]={0};
        int d1,d2;
        cin >> d1 >> d2 ;
        for(int i=0; i<d1 ; i++)
        {
            int b[26]={0};
            string s;
            cin >> s;
            for(int j=0; j<s.size() ; j++)
            {
                b[s[j]-'a']++;
                a[s[j]-'a']=max(a[s[j]-'a'],b[s[j]-'a']);
            }
        }
        for(int i=0; i<d2 ; i++)
        {
            int b[26]={0};
            string s;
            int flag=0, answer1=0,answar2=0;
            cin >> s;
            for(int j=0; j<s.size();j++)
            {
                b[s[j]-'a']++;
            }
            for(int k=0; k<26 ; k++)
            {
                if(b[k]<a[k])
                {
                    flag=-1;
                    answer1+=a[k]-b[k];
                }
                if(flag!=-1&&b[k]>a[k])
                {
                    flag=1;
                    answar2+=b[k]-a[k];
                }
            }
            if(flag==-1)
                cout<<"No"<<" "<<answer1<<endl;
            else if(flag==0)
                cout<<"Yes Yes"<<endl;
            else
                cout<<"Yes No"<<endl;
        }
    }
    return 0;
}

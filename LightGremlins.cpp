#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long answer=0;
long long p[25];
long long stat[26];
long long n;
int number;

void dfs(long long x, long long pp , int flag , int num )
{
    if(flag)answer+=n/pp*stat[num];
    else answer-=n/pp*stat[num];
    for(int i=x+1; i<number; i++)
    {
        if(1.0*pp*p[i]>1.0*n)continue;
        dfs(i,pp*p[i],1-flag,num+1);
    }  
}


int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        stat[1]=1;
        for(int i=2; i<26 ; i++)
        {
            stat[i]=stat[i-1]*2LL;
        }
        answer=0;
        cin >>n>>number;
        for(int i=0; i<number ; i++)
        {
            cin >> p[i];
        }
        for(int i=0 ; i<number ; i++)
        {
            dfs(i,p[i],1,1);
        }
        cout << answer << endl;
    }
    return 0;
}

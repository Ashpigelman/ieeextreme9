#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct booking
{
    int start,end;
    int val;
};

bool check(booking a,booking b)
{
    if(a.end == b.end)
        return a.start < b.start;
    return a.end < b.end;
}

booking arr[2001];

void findMaxAmount()
{
    int dp[50]={0};
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >>arr[i].start >> arr[i].end >> arr[i].val;
    sort(arr,arr+n,check);
    for(int i=0;i<n;i++)
    {
        for(int j=arr[i].start; j>=0 ;j--)
        {
            dp[arr[i].end]=max(dp[arr[i].end],dp[j]+arr[i].val);
        }
    }
    int revenue = 0;
    for(int i=0;i<50;i++)
        revenue =max(revenue ,dp[i]);
    
    cout << revenue << endl;
}


int main() 
{
    int t,n;
    cin >> t;
    while(t--)
    {
        findMaxAmount();
    }   
    
    return 0;
}

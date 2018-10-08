#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string get(string str)
{
    string tmp;
    int p = str.size();
    while(p)
    {
        tmp +=((p%10) +'0');
        p = p/10;
    }
    reverse(tmp.begin() , tmp.end());
    return tmp;
}

int main()
{
    string s;
    int lastCount;
    while(cin >> s)
    {
        if(s[0] == 'E')
            break;
        lastCount=0;
        for(int i=0; i< s.size() ; i++)
        {
            lastCount = lastCount*10;
            lastCount = lastCount + (s[i]-'0');
        }
        
        int count = 1;
        while(lastCount != s.size())
        {
            count++;
            lastCount = s.size();
            s = get(s);
        }
        cout << count << endl;
    }
    return 0;
}

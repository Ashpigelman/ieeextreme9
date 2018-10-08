#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void makeTacos()
{
    long long ingredients[3],taco;
    cin >> taco;
    for(int i=0 ; i<3;i++)
        cin >> ingredients[i];
    sort(ingredients, ingredients+3);
    long long  sale=0;
    if(ingredients[0]+ingredients[1] > ingredients[2])
        sale = (ingredients[0]+ingredients[1] +ingredients[2])/2;
    else
        sale  = ingredients[0]+ingredients[1];
    cout << min(taco , sale) << endl ;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        makeTacos();
    }    
    return 0;
}

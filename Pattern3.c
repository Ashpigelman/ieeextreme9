#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[1000001];
    int p[1000001];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str+1);
        int len=strlen(str+1);
        int j=0;
        for(int i=2; i<=len ; i++)
        {
            while(j>0 && str[j+1] != str[i])
            {
                j=p[j];
            }
            if(str[j+1] == str[i])
                j++;
            p[i] = j;
        }
        printf("%d\n",len - p[len]);
    }
        return 0;
}

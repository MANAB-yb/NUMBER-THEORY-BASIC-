#include<stdio.h>
int a[1000001];
//seive is prepared, the index of the array==the content then it is prime else the smallest prime factor
//of index is present use name of the array as "a"
void seive()
{
    int maxN=1000000;
    for(int i=0;i<=maxN;i++)
     {  
          a[i]=-1;
     }
    for(int i=2;i<=maxN;i++)
    {
        if(a[i]==-1)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                if(a[j]==-1)
                    a[j]=i;
            }
        }
    }
}
int main()
{
    seive();
    //printf("%d ",a[19]);
    int c;
    scanf("%d",&c);
    while(a[c]!=-1)
    {
        printf("%d X ",a[c]);
        c/=a[c];
    }
    printf(" 1\n");
    return 0;
}
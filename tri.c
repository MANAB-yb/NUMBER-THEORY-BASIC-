#include<stdio.h>
int maxN=10000;
int phi[100001];
//function of euler totient function using sieve in O(Nlog(log(N))) time complexity
void ETF()
{
    for(int i=2;i<=maxN;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<=maxN;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<maxN;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}

int main()
{
    ETF();
    int n,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&j);
        printf("%d\n",phi[j]);
    }
    return 0;
}
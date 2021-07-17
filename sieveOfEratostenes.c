#include<stdio.h>
int a[1000001];
/*int isPrime(int n)
{
    if(n==1||n==0)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}*/
//sieve of eratostenes is this where if the component of a[i]=1 then "i" is prime else it is not
void seive()
{
    
    int maxN=1000000;
    for(int i=2;i<=maxN;i++)
    {
        a[i]=1; //initiating every number as prime
    }
    for(int i=2;i*i<=maxN;i++)
    {
        if(a[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            {
                
                a[j]=0;//0 represent not prime number every multiple of primes are terminated
            }
        }
    }
}
int main()
{
    seive();
    int b;
    scanf("%d",&b);
    if(a[b])
    printf("PRIME\n");
    else
    printf("NOT PRIME\n");
    return 0;
}

         
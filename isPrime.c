#include<stdio.h>
//finding prinme using brute force with time complexity O(sqrt(n))
int isPrime( int n)
{
    if(n==0||n==1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(!n%i)
        return 0;
    }   
    return 1;
}
//the function will return 1 on composite number else 0 on prime numbers
// #include<stdio.h>
#include<math.h>
//code fr doing binary exponentiation or finding power of some base O(log(n))
int Exp(int base,int power)
{
    int res=1;
    while(power)
    {
        if(power%2)
        {
            res*=base;
            power--;
        }
        else
        {
            power/=2;
            base*=base;
        }
        
    }
    return res;
}

// int main()
// {
//     int a,b;
//     scanf("%d^%d",&a,&b);
//     printf("%d",Exp(a,b));
//     return 0;
// }

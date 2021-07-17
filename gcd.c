//function for finding GCD or HCF of two given numbers O(log(n))
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;

    }
    else{
        return gcd(a,a%b);
    }
}

//function for finding LCM of two numbers
int lcm(int a,int b)
{
   int c= gcd(a,b);
   return (a*b)/c;
}
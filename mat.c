#include<stdio.h>
int N = 101;
int res[101][101];
void mul(int a[][N], int b[][N],int dim)//This function is to multiply two square matrix and save it into the first matrix given as argument at O(m^3)where m is the order of square matrix and n is the power of the marix
{
    int rest[N][N];
   for(int i=0;i<dim;i++)
   {
       for(int j=0;j<dim;j++)
       {
           rest[i][j]=0;
           for(int k=0;k<dim;k++)
           {
               rest[i][j]+=a[i][k]*b[k][j];
           }
           a[i][j]=rest[i][j];
       }
   } 
}
void mat(int a[][N],int dim, int pow)//matrix exponentiation function O(m^3log(n)) here m is the order of the matrix and n is the power of the matrix
{
    int I[N][N];//An identity matrix is created which will work as result which will be stored in res matrix defined globally
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            if(i==j)
            I[j][j]=1;
            else
            I[i][j]=0;
        }
    }
    while(pow) 
    {
        if(pow%2)
        {
            mul(I,a,dim);
            pow--;
        }
        else
        {
            mul(a,a,dim);
            pow/=2;
        }
    }
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            res[i][j]=I[i][j];
        }
    }
}
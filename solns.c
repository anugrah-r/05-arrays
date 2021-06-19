/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int n)
{
    int maxn = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]>maxn)
            maxn = a[i];
    }
    return maxn;
}

int min(int a[], int n)
{
    int minn = 2147483647;
    for(int i = 0; i<n; i++)
    {
        if (a[i]< minn)
            minn = a[i];
    }
    return minn;
}

float average(int a[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    int avgn = sum/n;
    return avgn;
}

int mode(int a[],int n) 
{
   int mxV = 0, mxC = 0;
   for (int i = 0; i < n; ++i) 
   {
      int ct = 0;
      for (int j = 0; j < n; ++j) 
      {
         if (a[j] == a[i])
            ++ct;
      }  
      if (ct > mxC)
      {  
         mxC = ct;
         mxV = a[i];
      }
   }
   return mxV; 
}

int factors(int n, int a[])
{
    int p=n/2,j=0;
    for(int i=2;i<p+1;)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
            n=n/i;
        }
     else 
     i++;
  }return j;
}

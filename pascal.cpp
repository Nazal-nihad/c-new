//program to print the given no of lines as a pascals triangle without space

#include <iostream>
using namespace std;

int ncr(int n); //ncr function declared
int ncr(int n) //ncr function defined
{
    int p = 1;
    while(n>=1)
    {
    p=p*n;
    n=n-1;
    }
    return p;
}

int factorial(int a,int b); //factorial function declared
int factorial(int a,int b) //factorial function defined
{
    int x=ncr(a);
    int y=ncr(b);
    int c=ncr((a-b));
    int result = x/(y*c); 
    
    return result;
}

int main()
{    
int n,r,i;
i=0;

cout<<"enter the number of lines: ";
cin>>n;

while(i<=n-1) //looping starts for line 
{
    r=0;
    while(r<=i) //loop for row
    {
        cout<<factorial(i,r)<<" ";
        r++;
    }
    cout<<"\n";
    i++;
}
return 0;
}

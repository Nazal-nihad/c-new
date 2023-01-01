//program to find sum of integers in a given number

#include <iostream>

using namespace std;

int main()
{
    int i,j,n,k,sum;
    
    i=0;
    j=1;
    sum=0;
    
    cout<<"enter the number :";
    cin>>n;
    k=n;

    while(n>0)
    {
        i=i+1;
        n=n/10;
    }
    
    
    while(j<=i)
    {
        sum=sum+k%10; //separate the digits and add
        k=(k-k%10)/10;
	j++;
    }
    
    cout<<sum<<'\n';
    return 0;
}

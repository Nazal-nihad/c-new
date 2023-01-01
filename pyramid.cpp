//variation of pyramid pattern with spaces

#include <iostream>

int main() {
    
    int i,j,n,k;
    i=1;
    
    std::cout<<"enter no of lines ";
    std::cin>>n;
    
    while(i<=n)
    {
        j=1; 
        k=1;
        
        while(j<=n-i)
        {
            std::cout<<" ";
            j++;
        }
        while(k<=2*i-1)
        {
            std::cout<<"*";
            k++;
        }
        std::cout<<"\n";
        i++;
    }
  
    return 0;
}

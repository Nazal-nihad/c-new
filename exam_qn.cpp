//exam question of 1 and 0 alternate in row and line program 
#include <iostream>

int main() {
    int i,n,j;
    i=1;
    
    std::cout << "enter no of lines ";
    std::cin>>n;

while(i<=n)
{
    
    if(i%2==0)
    {
        j=1;
        
        while(j<=i)
        {
            if(j%2==0)
            {
                std::cout<<"1";
            }
            else
            {
                std::cout<<"0";
            }
            j++;
        }
        std::cout<<" \n";
    }

    else{
        j=1;
 while(j<=i)
        {
            if(j%2==0)
            {
                std::cout<<"0";
            }
            else
            {
                std::cout<<"1";
            }
            j++;
        }
        std::cout<<" \n";
    }
        
    i++;
}
    return 0;
}

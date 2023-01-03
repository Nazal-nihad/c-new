//program to interchange two numbers

#include <iostream>

void interchange(int&num1,int&num2);
void interchange(int&num1,int&num2)
{
    int t;
    t = num1;
    num1 = num2;
    num2 = t;
    
}
int main()
{
    int x,y;
    
    std::cout<<"enter no 1 x = ";
    std::cin>>x;
    
    std::cout<<"enter no 2 y = ";
    std::cin>>y;
    
    interchange(x,y);
    
    std::cout<<"now x = "<<x<<" and y = "<<y;
 
 return 0;   
}

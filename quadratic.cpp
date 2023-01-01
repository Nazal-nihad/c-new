//program to find roots of a quadratic equation

#include <iostream>
#include <cmath>
int main()
{
    int a,b,c;
    double d,root1,root2;

    std::cout<<"enter coefficient of x^2 :";
    std::cin>>a;

    std::cout<<"enter coefficient of x :";
    std::cin>>b;

    std::cout<<"enter constant value :";
    std::cin>>c;
    
    root1 = 0;
    root2 = 0;

    d = b*b-4*a*c;

    if(d>0)
    {
        root1 = (-1*b+sqrt(d))/2*a;
        root2 = (-1*b-sqrt(d))/2*a;

        std::cout<<"the roots of the given quadratic equation are "<<root1<<" and "<<root2;
    }

    else if(d<0) //not yet working 
    {

        root1 = (-1*b+sqrt(d))/2*a;
        root2 = (-1*b-sqrt(d))/2*a;

        std::cout<<"the roots of the given quadratic equation are "<<root1<<" and "<<root2;
    }

    else
    {
        root1 = -1*b/2*a;

        std::cout<<root1;
    }

    return 0;
}
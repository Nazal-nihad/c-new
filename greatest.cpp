//program to find the greatest digit from the given numbers (here 8 numbers)

#include <iostream>

int main()
{
	int a,b,c,d,e,f,g,h;
	int i;
	
	std::cout<<"enter 8 number :";
	std::cin>>a>>b>>c>>d>>e>>f>>g>>h;

	int array[8] = {a,b,c,d,e,f,g,h};

	int greatest_number = array[0];

	for(i=0;i<8;i++)
	{
		if(array[i]>greatest_number)
		{
			greatest_number = array[i];
		}

	}

	std::cout<<greatest_number<<'\n';

	return 0;

}

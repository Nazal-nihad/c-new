#include <iostream>
int main()
{
	int number,odd_count,even_count,i,a,b,c,d,e,f,g,h;

	odd_count =  even_count = 0;


	std::cout<<"enter 8 digits :\n";
	std::cin>>a>>b>>c>>d>>e>>f>>g>>h;

	int number_list[8] = {a,b,c,d,e,f,g,h};

	for(i=0;i<8;i++)
	{
		number = number_list[i];

		if(number%2==0)
		{
			even_count+=1;
		}
		else
		{
			odd_count+=1;
		}

	}

	std::cout<<even_count<<" even numbers and "<<odd_count<<"odd numbers \n";

	return 0;

}

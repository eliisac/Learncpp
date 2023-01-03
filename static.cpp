#include<iostream>

void function()
{
	static int a=0;	/* scope is local and only once is getting initialized*/
	a+=1;
	std::cout<<a<<std::endl;
}
	
int main()
{
	function();
	function();
	function();
	function();
	int* k=new int[5];
	{
		int i=1900;
		for (int j=0;j<5;j++)
		{
			*k=i;
			std::cout<<&k<<" "<<k<<" "<<*k<<std::endl;
			k=k+1;
		}
		k=k-5;
	}
	for (int j=0;j<5;j++)
	{
			std::cout<<&k<<" "<<k<<" "<<*k<<std::endl;
			++k;
	}
}

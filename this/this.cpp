#include "iostream"
/*  */
int main()
{
	int a=25;
	int* ptr=&a;
	int*& next=ptr;
	std::cout<<a<<"  "<<&a<<std::endl;
	std::cout<<ptr<<"  "<<*ptr<<"  "<<&ptr<<std::endl;
	std::cout<<next<<"  "<<*next<<"  "<<&next<<std::endl;
	int b=35;
	next=&b;
	std::cout<<a<<"  "<<&a<<std::endl;
	std::cout<<ptr<<"  "<<*ptr<<"  "<<&ptr<<std::endl;
	std::cout<<next<<"  "<<*next<<"  "<<&next<<std::endl;
	std::cout<<b<<"  "<<&b<<std::endl;	
	return 0;
}

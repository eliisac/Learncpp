#include<iostream>
#define value 0

#if value==0
#define print(x) std::cout<<x<<std::endl;
#elif value==1
#define print(x) std::cout<<x<<" "<<x<<std::endl;
#else 
#define print(x) std::cout<<"Blah"<<std::endl;
#endif

#define Main int main()\
{\
print("Speak")\
}

Main

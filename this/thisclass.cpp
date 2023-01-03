#include <iostream>
class Entity
{
	public:
		int x,y;
		Entity(int x,int y)
		{
			std::cout<<"------------Inside constructor-----------"<<std::endl;
			this->x=x;
			y=y;
			Entity* p=this;
			std::cout<<p<<" "<<this<<std::endl;
			std::cout<<&p<<std::endl;
			std::cout<<p->x<<"  "<<p->y<<std::endl;
			Entity* const& q=this;
			std::cout<<q<<" "<<this<<std::endl;
			std::cout<<&q<<std::endl;
			std::cout<<q->x<<"  "<<q->y<<std::endl;
			std::cout<<&this<<std::endl;
			std::cout<<"------------Outside constructor-----------"<<std::endl;
		}
		void print() const
		{
			const Entity* p= this;
			Entity s=Entity(1,2);
			p=&s;
			std::cout<<p->x<<"  "<<p->y<<std::endl;
		}
};

int main()
{
	Entity e(8,9);
	e.print();
}

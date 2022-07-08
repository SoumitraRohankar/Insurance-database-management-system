#include<iostream>
using namespace std;
class animal
{
	public:
		 void eat()
		{
			cout<<"I am eating food"<<endl;
		}
};
class Cat: public animal
{
	public:
		void eat()
		{
			cout<<"I am eating cat food";
		}
};
class Dog: public animal
{
	public:
		void eat()
		{
			cout<<"I am eating dog food";
		}
};
void function1(animal *ex)
{
	ex->eat();
}
int main()
{
	animal *ptr;
	
	Cat c1;
	Dog d1;
	
	ptr=&c1;
	
	function1(ptr);

}

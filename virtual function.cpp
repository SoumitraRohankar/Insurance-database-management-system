#include<iostream>
using namespace std;
//virtual function
class Mybase
{
	public:
		void show()
		{
			cout<<"base class show function called"<<endl;
			
		}
		virtual void print()
		{
		cout<<"base class print function called"<<endl;

		}
};
class myderived : public Mybase
{
	public:
		void show()
		{
			cout<<"dervied class show function called"<<endl;
			
		}
	void print()
		{
		cout<<"derived class print function called"<<endl;

		}
};
int main()
{
	Mybase *baseptr;
	myderived obj;
	
	baseptr=&obj;
	baseptr->print();
	baseptr->show();
	return 0;
}

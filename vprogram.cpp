#include<iostream>
using namespace std;
class insurance_main
{
	
	public:
		virtual void details_customer()
		{
			cout<<"\nDetails of customer"<<endl;
		
		}
};
class insurance_new_member: public insurance_main
{
		
	public:
		int age,salary,renew_date,prenium_payment,retirement_year,home_insurance,motor_insurance;
	    string name1,life_insurance_type_of_insurance,date_of_insurance;
void details_customer()
		{
  cout<<"\nName ::";
  cin>>name1; 
  cout<<"\nAge ::";
  cin>>age;
  cout<<"\nwhat type of insurance ::";
  cin>>life_insurance_type_of_insurance;
  cout<<"\nDate of issuse ::";
  cin>>date_of_insurance;
  cout<<"\nretirement year ::";
  cin>>retirement_year;
  cout<<"\nprenium_payment::";
  cin>>prenium_payment;
  cout<<"\nrenewal date::";
  cin>>renew_date;
 }
 void getdata()
 {
 	cout<<"\nName ::"<<name1; 
  cout<<"\nAge ::"<<age;
  cout<<"\nwhat type of insurance ::"<<life_insurance_type_of_insurance;
  cout<<"\nDate of issuse ::"<<date_of_insurance;
  cout<<"\nretirement year ::"<<retirement_year;
  cout<<"\nprenium_payment::"<<prenium_payment;
  cout<<"\nrenewal date::"<<renew_date;
 }
};
void function1(insurance_main *ex)
{
	ex->details_customer();
	ex->getdata();
}
int main()
{
	insurance_main *ptr;
	
	insurance_new_member n1;
	n1.details_customer();
	n1.getdata();
	ptr=&n1;
	
    function1(ptr);
	
	

}

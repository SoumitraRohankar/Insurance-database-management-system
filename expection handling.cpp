#include<iostream>
using namespace std;
//expection handling
int extend_date(int n)
{
	if(n>=30)
     throw n;
    return n;
}

int main()
{
	int pay,date;
	int date_to_pay,additional_charge;
	cout<<"\nenter value you want to pay to premium:"<<endl;
	cin>>pay;
	cout<<"\ndate limit within 30days after paying previous premium:"<<endl;
	cin>>date;
	try
	{	
	date_to_pay=extend_date(date);
	cout<<"\nyour premium payment is paid within 30 days "<<endl;
    }
	catch(int &num1)
	{
		cout<<"\nadditional charge added to your premium payment as per number of days exceed"<<endl;
		additional_charge=(date-30)*50;
		cout<<"\nNow,your premium payment you have to pay with along adddtional charge is : "<< additional_charge+pay <<endl; 		
	}
	
	cout<< "\nOnce your payment is done! "<<endl;

}

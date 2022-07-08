#include<iostream>
#include<string.h>
using namespace std;
//function overloading
int add_infor(int prenium)
{
	cout<<"\nprenium to pay="<<prenium<<endl;
}
float add_infor(float claim_money)
{
	cout<< "\nhow much money is claim="<<claim_money<<endl;
}
double add_infor(float claim_money,int prenium)
{
	
	cout<<"\nremaining money to pay= "<< prenium-claim_money<<endl;
	return prenium-claim_money;
}
int main()
{
	cout<<"\n\tInformation"<<endl;
	add_infor(4000.50f);
	add_infor(50000);
    add_infor(4000.50f,50000);
}

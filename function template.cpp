#include<iostream>
#include<string.h>
using namespace std;
//function template
template <typename T>
T add_infor(T prenium,T claim_money)
{
	int remaining_money;
	cout<<"\nPrenium to pay within 30 day:"<<prenium<<endl;
	cout<<"\nClaim money from prenium:"<<claim_money<<endl;
	remaining_money=prenium-claim_money;
	cout<<"\nRemaining money need to pay within in 30 days(premium - claim money):"<<remaining_money<<endl;
}

int main()
{
    char name[100];

	cout<<"\nUpdated Information about customer"<<endl;
	cout<<"\nInformation regarding how much money is going to be claim?"<<endl;
	cout<<"\nHow much money is need to pay to policy holder (prenium money):"<<endl;
    add_infor<int>(10000,1000);
    add_infor<float>(40000,900);

   return 0;	
}

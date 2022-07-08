#include<iostream>
using namespace std;


int main()
{
	int i;
	char choice,t;
   	cout<<"\n\t  ======================================== ";
	cout<<"\n\t||  -----------------------------------   ||";
	cout<<"\n\t||  | INSURANCE DATA MANAGEMENT SYSTEM |  ||";
	cout<<"\n\t||  -----------------------------------   ||";
	cout<<"\n\t||  1.add new customer name:              ||";
	cout<<"\n\t||  2.add of insurance:                   ||";
	cout<<"\n\t||  3.add new policy:                     ||";
	cout<<"\n\t||  4.update/extend date of insurance:    ||";
	cout<<"\n\t||  5.add information and claim examiners:||";
	cout<<"\n\t||  6.View customer details:              ||";
	cout<<"\n\t||  7.Exit                                ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||  ENTER YOUR CHOICE:                    ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||========================================||";
	
	
	do{
	cout<<"\nENTER YOUR CHOICE:"<<endl;
	cin>>choice;
	
	switch(choice)
	{
	
	case '1':
		cout<<"Add new customer member"<<endl;
		break;
	case '2':
        cout<<"Add of insurance"<<endl;
	    break;
	case '3':
		cout<<"Add new policy"<<endl;
		break;
	case '4':
		cout<<"Update/extend date of insurance"<<endl;
		break;
	case '5':
		cout<<"Add information and claim examiners"<<endl;
		break;
	case '6':
		cout<<"View customer details:"<<endl;
		break;
	case '7':
		cout<<"Exit"<<endl;
		break;
	default:
	   cout<<"error plz try again"<<endl;
	 	
}
    cout<<"\n=========================================="<<endl;
    cout<<"\n\nDo you want to Try again"<<endl;
    cin>>t;
}while(t == 'Y'|| t =='y');

}

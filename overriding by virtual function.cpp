#include<iostream>
using namespace std;
//overriding by using virtual function 
class project{

	public:
		char a[80];
		virtual void display(){
			 cout<<"\nThis is Insurance Data Management System"<<endl;
		}
};
class dproject : public project{
	public:
		void display()
		{
		  cout<<"\n============================================";
		  cout<<"\nThis is Insurance Data Management System \nIn this various customers can add their new insurance, extend their policy, check their insurance etc."<<endl;
		  cout<<"\nThis page would be accessible only after successful registration. ";
		  cout<<"\n============================================";
	      cout<<"\nAfter registration, the policy holder can provide the policy number and the premium amount."; 
	      cout<<"\nA Reply mail would be sent to the policy holder.";
		  cout<<"\nIf there are any errors found in the policy details a reminder mail would be sent to change the details.";
		  cout<<"\nIf the policy information mentioned is error free the status information about the policy would be displayed.";
		  cout<<"\nIf the policy number is not corrected";
		  cout<<"\nThe policy number would be deleted on the 5th day and a reminder mail sent to them.";
		  cout<<"\n============================================";
		  cout<<"\nStatus::";
		  cout<<"\nOn successful registration, the customer will have access to information regarding status of policy/s, loan, revival, premium due/ policy calendar, maturity calendar etc.";
		  cout<<"\n============================================";
	      cout<<"\nFeedback Form:";
          cout<<"\nPolicyholders may use the ‘Feedback’ link to send their queries and valuable suggestions / comments";
		}
};
int main()
{
		project *project_pointer;
		project pro;
		dproject der;
		
		project_pointer=&der;
		project_pointer->display();
		return 0;
}

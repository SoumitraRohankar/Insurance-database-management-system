#include<iostream>
using namespace std;
//constructor and destructor
class customer
{
    private:
    char name[80],address[80],Voter_ID_Card[80],Pan_Card[80],Aadhaar_Card[80],Birth_certificate[80],date_of_insurance[80];
	int  age,Driving_License;
    long int salary;
    public:
    customer();//Constructor
    ~customer();//Destructor
    void read();
    void disp();
};
customer :: customer()
{
    cout<<"\nThis is Customer Details constructor called..........."<<endl;
}
void customer :: read()
{
    cout<<"\nEnter the Customer Name :: ";
    cin.getline(name,80);
    cout<<"\nEnter the Customer address :: ";
    cin.getline(address,80);
    cout<<"\nEnter Voter_ID_Card :: ";
    cin.getline(Voter_ID_Card,80);
    cout<<"\nEnter Pan Card ::";
    cin.getline(Pan_Card,80);
    cout<<"\nEnter aadhar card ::";
    cin.getline(Aadhaar_Card,80);
    cout<<"\nEnter birth certificate no:";
    cin.getline(Birth_certificate,80);
     cout<<"\nDate of insurance :: ";
    cin.getline(date_of_insurance,80);
    cout<<"\nEnter the Customer age :: ";
    cin>>age;
    cout<<"\nEnter the salary :: ";
    cin>>salary;
   
}
void customer :: disp()
{
    cout<<"\nThe Entered Customer Details are shown below ::---------- \n";
    cout<<"\nCustomer Name :: "<<name;
    cout<<"\nage :: "<<age;
    cout<<"\nAddress :: "<<address;
    cout<<"\nsalary :: "<<salary;
    cout<<"\ndate of isurance issused:: "<<date_of_insurance;
    cout<<"\nvoter ID card :: "<<Voter_ID_Card;
    cout<<"\nPan Card no :: "<<Pan_Card;
    cout<<"\naadar card no :: "<<Aadhaar_Card;
    cout<<"\nBirth_certificate no:: "<<Birth_certificate;
}
customer :: ~customer()
{
    cout<<"\n\nCustomer Detail is Closed.............\n";
}
int main()
{
    customer c1;
    c1.read ();
    c1.disp ();
    return 0;
}

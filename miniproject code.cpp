#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//constructor and destructor
class customer
{
    private:
    char name[80],address[80],Voter_ID_Card[80],Pan_Card[80],Aadhaar_Card[80],Birth_certificate[80],date_of_insurance[80];
    string firstname,lastname,fullname;
	int  age,Driving_License,rate_of_interest;
    long int salary;
    public:
    customer();//Constructor
    ~customer();//Destructor
    void read();
    void disp();
};
customer :: customer()
{
    cout<<"\nThis is Customer Details constructor called"<<endl;
}
void customer :: read()
{
    cout<<"\nEnter the Customer details here ";
    cin.getline(name,80);
    cout<<"\nEnter the Customer Name :: ";
    cin.getline(name,80);
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
    cout<<"\nCustomer details ";
    cout<<"\nName :: "<<name;
	cout<<"\nage :: "<<age;
    cout<<"\nsalary :: "<<salary;
    cout<<"\ndate of isurance issused:: "<<date_of_insurance;
    cout<<"\nvoter ID card :: "<<Voter_ID_Card;
    cout<<"\nPan Card no :: "<<Pan_Card;
    cout<<"\naadar card no :: "<<Aadhaar_Card;
    cout<<"\nBirth_certificate no:: "<<Birth_certificate;
}
customer :: ~customer()
{
    cout<<"\n\nCustomer Detail is Closed\n";
}
//inheritance (herichial inheritance)
class insurance
{
	public:
		int security_year;
};
class life_insurance : public insurance
{
    public:
    	int prenium_pay;
    	void setdata()
    	{
    		cout<<"This is life insrance::"<<endl;
		}
};
class whole_life_term_insurance : public life_insurance
{
	public:
	 double additonal_bonus,rate_of_interest;
       void setdata()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security ::";
		cin>>security_year;
		cout<<"\nEnter the amount of prenium payment ::";
		cin>>prenium_pay;
		cout<<"\nEnter the rate of interest on that payment ::";
		cin>>rate_of_interest;
		 
	additonal_bonus =prenium_pay*pow( (1 + rate_of_interest / 100),security_year );
	   }
	   void readdata()
	   {
	   cout<<"\nSecurity year ::"<<security_year;
	   cout<<"\nprenium payment of customer :: "<<prenium_pay;
	   cout<<"\nYour family will receive Rupees per month with additional bonus depend upon how much year you have that insurance ";  
	   cout<<"\nTotal amount you get with added additional bonus ::"<<additonal_bonus; 	
	   //total amount added into added into additional bonus
	   }	
	   
};
class pension_plan_insurance : public life_insurance
{
	public:
	int s;
	float pension;
	void setdata()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security after retirement ::";
		cin>>security_year;
		cout<<"\nEnter the amount of prenium payment:";
		cin>>prenium_pay;
		cout<<"\nEnter the salary ::";
		cin>>s;
		pension=(s-prenium_pay)/2;
	}
	void readdata()
	{
	cout<<"\nSecurity year ::"<<security_year;
	cout<<"\nPrenium payment of customer :: "<<prenium_pay;
	cout<<"\nAmount of pension you will receive depend upon salary you get ::"<<pension;
	}
	
};
class Money_back_Policy : public life_insurance
{
	public:
	int ins_y,cur_y;
	float balance_money;
   void setdata_m()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security ::";
		cin>>security_year;
		cout<<"Enter the amount of prenium payment:";
		cin>>prenium_pay;
		cout<<"\nEnter year when you assigned insurance ::";
		cin>>ins_y;
		cout<<"\nEnter current year ::";
		cin>>cur_y;
        balance_money=(cur_y-ins_y)*12*prenium_pay;
	
	}
	void readdata_m()
	{
	cout<<"\nSecurity year ::"<<security_year;
	cout<<"\nPrenium payment of customer :: "<<prenium_pay;
	cout<<"\nBalance money you have left (financial problem during paying hospital bills)::"<<balance_money;
	} 
};
class general_insurance : public insurance
{
	public: 
	int  financial_compensation;
	
	
};
class motor_insurance : protected general_insurance
{
	public:
		int financial_protection,value,age_of_your_vehicle,claim_history,finanical_money;
		long int finanical_money_car,finanical_money_bike;
	    char Model_vehicle[80],type_of_plan[80];
      void carinsurance()
      {
        long int finanical_money_car;
        cout<<"\nCar details ::";
      	cin.getline(Model_vehicle,80);
      	cout<<"\nCar model ::";
      	cin.getline(Model_vehicle,80);
      	cout<<"\nfinancial protection to your car :: "<<endl;
      	cin>>finanical_money_car;
      	cout<<"\nfinancial_compensation";
	    cin>>financial_compensation;
	  }
	  void bikeinsurance()
	  {
	  	long int finanical_money_bike;
	  
	  	cout<<"\nbike details ";
      	cin.getline(Model_vehicle,80);
      	cout<<"\nbike model ::";
      	cin.getline(Model_vehicle,80);
	  	cout<<"\nfinanical protection to your bike ::";
	  	cin>>finanical_money_bike;
      	cout<<"\nfinancial_compensation";
      	cin>>financial_compensation;
	  }
	  void getdata_c()
	  {
	  	cout<<"\nFinanical protection to your Car ::"<<finanical_money_car;
	  	cout<<"\nCar Model ::"<<Model_vehicle;
	    cout<<"\nfinancial_compensation :: "<<financial_compensation;
	  }
	  void getdata_b()
	  {
	  	cout<<"\nFinanical protection to your bike ::"<<finanical_money_bike;
	  	cout<<"\nbike Model ::"<<Model_vehicle;

	  	cout<<"\nfinancial_compensation"<<financial_compensation;
	  }
};
class Travel_Insurance : protected general_insurance
{
    public: 
	int sum_assured_money,trip_fees;
    char type_of_plan[80],location_of_travel[80];
	   void traveldata()
	   {
	   	cout<<"\n\nSomething happen (accident,civil war,national emergency) during traveling";
	   	cout<<"\nSum assured money ::";
	   	cin>>sum_assured_money;
	   	cout<<"\nTravel insurance ::";
	   	cin.getline(type_of_plan,80);
	   	cout<<"\nlocation of travel ::";
	   	cin.getline(location_of_travel,80);
		cout<<"\nEnter trip/tour fees ::";
		cin>>trip_fees;
	    financial_compensation=(trip_fees+sum_assured_money);
	   }
	   void getdata_t()
	   {
	   	cout<<"\nAssured money ::"<<sum_assured_money;
	   	cout<<"\nlocation of travel ::"<<location_of_travel;
	    cout<<"\nfinancial_compensation ::"<<financial_compensation;
	   }	   
};
class Home_Insurance : protected general_insurance
{
	public:
	int size_of_home,age_home;//size in acres;
    char location_home[80],system_installed[20];
    void homedata()
    {
    	cout<<"\nHome details ";
    	cin.getline(location_home,80);
    	cout<<"\nlocation of home ::";
    	cin.getline(location_home,80);
    	cout<<"\nfire System installed ::";
    	cin.getline(system_installed,20);
    	cout<<"\nSize of home in acres ::";
    	cin>>size_of_home;
    	cout<<"\nfinancial_compensation";
    	cin>>financial_compensation;
	}
	void getdata_h()
	{
		cout<<"\nSize of home in acres ::"<<size_of_home;
		cout<<"\nlocation of home in acres ::"<<location_home;
		cout<<"\nfire system installed ::"<<system_installed;
		cout<<"\nfinancial compensation"<<financial_compensation;
	}
};
//class template
template <typename T,typename U>
class details
{
    private:
//paid_money_for_time is variable crdetails_customered that is crdetails_customered for money paid while buying that thing;
//renew_time is variable crdetails_customered for how much time is your insurance policy is valid;
    	T age,date,year,renew_time,paid_money_for_time; 
    	U name,month,insurance_type;
  public:
   	void setData(T x,T z,U v,T q,U y,U k,T j,T s)
  	{
  	   age=x;
  	   date=z;
  	   year=q;
	   name=y;
	   month=v;
	   insurance_type=k;
	   renew_time=j;
	   paid_money_for_time=s;
	   
	}
	T getrenew_timedata()
	{
		return renew_time;
	}
	T getpaid_money_for_time()
	{
		return paid_money_for_time;
	}
    T getageData()
	{
		return age;
	}
	T getdateData()
	{
		return date;
	}
	T getyearData()
	{
		return year;
	}
	U getnameData()
	{
	   return name;
	}
	U getmonthData()
	{
	   return month;
	}
	U getinsurancetype()
	{
		return  insurance_type;
	}

};
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
//expection handling
int extend_date(int n)
{
	if(n>=30)
     throw n;
    return n;
}
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
//friend function
class assets{
    private:
    int premium_to_pay;
    friend int addpayment(assets);

    public:
    assets() : premium_to_pay(0) {}
        
};
int addpayment(assets price)
{

    price.premium_to_pay=5000;
    return price.premium_to_pay;
};
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
		  cout<<"\nOn successful registration, the customer will have access to information regarding status of policy/s, loan\n revival, premium due/ policy calendar, maturity calendar etc.";
		  cout<<"\n============================================";
	      cout<<"\nFeedback Form:";
          cout<<"\nPolicyholders may use the Feedback link to send their queries and valuable suggestions / comments";
		}
};
int main()
{
	char choice,t,choice1,sel,c,s,n,f,name[100];
	int i,select,pay,date,date_to_pay,additional_charge;
	assets price;
	whole_life_term_insurance w1;
	pension_plan_insurance p1;
	Money_back_Policy m1;
	motor_insurance motor1,motor2;
	Travel_Insurance t1;
	Home_Insurance h1;
	customer c1;
	//virtual function
	project *project_pointer;
	project pro;
	dproject der;
	details <int,string>obj1;
	details <int,string>obj2;
   	cout<<"\n\t  ======================================== ";
	cout<<"\n\t||  -----------------------------------   ||";
	cout<<"\n\t||  | INSURANCE DATA MANAGEMENT SYSTEM |  ||";
	cout<<"\n\t||  -----------------------------------   ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||  1.Add new customer name:              ||";
	cout<<"\n\t||  2.Add new type of insurance:          ||";
	cout<<"\n\t||  3.Add details about insurance         ||";
	cout<<"\n\t||   of customer:                         ||";
    cout<<"\n\t||  4.Update/Extend date of insurance:    ||";	
	cout<<"\n\t||  5.Add information and claim examiners:||";
	cout<<"\n\t||  6.View Insurance Policy details:      ||";
	cout<<"\n\t||  7.Exit                                ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||                                        ||";
	cout<<"\n\t||========================================||";
	
	do{
	cout<<"\n\t";
	cout<<"\nENTER YOUR CHOICE:"<<endl;
	cin>>choice1;
	switch(choice1)
	{
	case '1':
		cout<<"Add new customer member"<<endl;
        c1.read ();
        c1.disp ();
		break;
	case '2':
        cout<<"Add new type of insurance"<<endl;
    cout<<"\n1 Insurance";
	cout<<"\n 1 life insurance";
    cout<<"\n\t1 whole life term insurance "; 
    cout<<"\n\t2 pension plan insurance";
    cout<<"\n\t3 Money back Policy";
	cout<<"\n 2 general insurance";
	cout<<"\n\t1 Motor insurance";
	cout<<"\n\t2 Travel Insurance";
	cout<<"\n\t3 Home Insurance";
		do{
	cout<<"\nEnter choice:";
	cin>>choice;
	switch(choice)
	{
		case '1':
			cout<<"\nlife Insurance";
			do
			{
			cout<<"\nEnter which life insurance you want to select";
			cin>>select;
			if(select == 1)
			{
				cout<<"\nwhole life term insurance "<<endl;
		        cout<<"\n//function overriding is used//";
				cout<<"\nDetails "<<endl;
				w1.setdata();//function overriding
				w1.readdata();//function overriding
			}
			else
			{
				if(select == 2)
				{
					cout<<"\npension plan insurance"<<endl;
					cout<<"\n//function overriding is used//";
					cout<<"\nDetails "<<endl;
				    p1.setdata();
				    p1.readdata();
				}
				else
				{
					if(select == 3)
					{
						cout<<"\nMoney back Policy"<<endl;
						cout<<"\nDetails "<<endl;
						m1.setdata_m();
						m1.readdata_m();
					}
					else
					{
						cout<<"try again"<<endl;	
					}
				}
			}
		    cout<<"\nDo you want to try again in Life insurance in field :"<<endl;
		    cin>>sel;
		}
		while(sel == 'y');
			break;
		case '2':
			cout<<"\nGeneral Insurance";
			do{
			
			cout<<"\nEnter which general insurance you want to select :: ";
			cin>>s;
			if(s == '1')
			{
				cout<<"\nMotor insurance";
				cout<<"\nDetails";
				cout<<"\nEnter Customer motor(bike (b)or car(c))";
				cin>>f;
				if(f == 'c')
				{
				  motor1.carinsurance();
				  motor1.getdata_c();	
				}
				else{
					if(f == 'b')
					{
						motor2.bikeinsurance();
						motor2.getdata_b();
					}
					else
					{
						cout<<"\nplease try again";
					}
				}	
			}
			else
			{
				if(s == '2')
				{
				cout<<"\nTravel Insurance";
				cout<<"\nDetails";
				t1.traveldata();
				t1.getdata_t();	
               }
               else
               {
               	if(s == '3')
               	{
				cout<<"\nHome Insurance";
				cout<<"\nDetails";
				h1.homedata();
				h1.getdata_h();
               }
               else
               {
               	cout<<"\nTry again";
			   }
			   }
			}
		   cout<<"\nDo you want to try again in General insurance in field:";
		   cin>>n;
		}
		while(n == 'y');
		break;
	}
	cout<<"\nDo you want to try again then press y select one of the insurance life or general insurance ::";
	cin>>c;
}
while(c =='y');
	    break;
	case '3':
  cout<<"\nClass Template is used";
  cout<<"\n\nAdd details about insurance of customer"<<endl;
  obj1.setData(20,1,"january",2020,"Soumitra","Motor insurance",40,90000);
  cout<<"\nName :"<<obj1.getnameData();
  cout<<"\nAge :"<<obj1.getageData();
  cout<<"\nwhat type of insurance:"<<obj1.getinsurancetype();
  cout<<"\nDate of issuse : "<< obj1.getdateData()<<"/"<< obj1.getmonthData() <<"/"<<obj1.getyearData();
  cout<<"\nThis insurance is valid upto how many year:"<<obj1.getrenew_timedata();
  cout<<"\nHow much money you have to pay:"<<obj1.getpaid_money_for_time();
  cout<<"\n";
  obj2.setData(20,1,"october",2021,"Siddhesh","Home insurance",40,100000);
  cout<<"\nName :"<<obj2.getnameData();
  cout<<"\nAge :"<<obj2.getageData();
  cout<<"\nwhat type of insurance:"<<obj2.getinsurancetype();
  cout<<"\nDate of issuse : "<< obj2.getdateData()<<"/"<< obj2.getmonthData() <<"/"<<obj2.getyearData();
  cout<<"\nThis insurance is valid upto how many year:"<<obj2.getrenew_timedata();
  cout<<"\nHow much money you have to pay:"<<obj2.getpaid_money_for_time();
		break;
	case '4':
	cout<<"\nFunction template is used";
	cout<<"\nUpdate/Extend date of insurance"<<endl;
    cout<<"\n============================================";
	cout<<"\nUpdated Information about customer"<<endl;
	cout<<"\nInformation regarding how much money is going to be claim?"<<endl;
	cout<<"\nHow much money is need to pay to policy holder (prenium money):"<<endl;
    add_infor<int>(10000,1000);
    add_infor<float>(40000.19f,900.90f);
	cout<<"\n============================================";
	cout<<"\nExpection handling is used "<<endl;
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
		break;
	case '5':
	cout<<"\nFunction overloading is used";
	cout<<"\nAdd information and claim examiners"<<endl;
	cout<<"\nInformation"<<endl;
	add_infor(4000.50f);
	add_infor(50000);
    add_infor(4000.50f,50000);
    cout<<"\nfriend function is used";
     cout << "\nPremium Payment : " << addpayment(price);
		break;
	case '6':
		cout<<"\nView Insurance Policy details:"<<endl;
		project_pointer=&der;
		project_pointer->display();
		break;
	case '7':
		cout<<"\nExit"<<endl;
		break;
	default:
	   cout<<"\nError plz try again"<<endl;	 	
}
    cout<<"\n=========================================="<<endl;
    cout<<"\nDO YOU WANT TO TRY AGAIN"<<endl;
    cin>>t;
}while(t == 'Y'|| t =='y');

}

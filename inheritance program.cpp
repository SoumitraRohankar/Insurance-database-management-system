#include<iostream>
using namespace std;
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
};
class whole_life_term_insurance : public life_insurance
{
	public:
		int additonal_bonus;
//It covers you for a lifetime. 
// Your family receives a certain sum of money after your death.
//bonus will be also include that often accrues on such amount.	
       void setdata_w()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security ::";
		cin>>security_year;
		cout<<"Enter the amount of prenium payment:";
		cin>>prenium_pay;
		cout<<"Your family will receive 60,000 Rupees per month with additional bonus depend upon how much year you have that insurance ";
		cin>>additonal_bonus;
	   }
	   void readdata_w()
	   {
	   cout<<"\nSecurity year ::"<<security_year;
	   cout<<"\nprenium payment of customer :: "<<prenium_pay;
	   cout<<"\nTotal amount you get with added additional bonus ::"<<additonal_bonus+60000; 	
	   }	
	   
};
class pension_plan_insurance : public life_insurance
{
	public:
	int pension;
	//This helps build your retirement fund. -
	//You can get a regular pension amount after retirement. -
	//In the case of your death, your family can claim the sum assured.
	void setdata_p()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security ::";
		cin>>security_year;
		cout<<"Enter the amount of prenium payment:";
		cin>>prenium_pay;
		cout<<"Amount of pension you will receive ::";
		cin>>pension;
	}
	void readdata_p()
	{
	cout<<"\nSecurity year ::"<<security_year;
	cout<<"\nPrenium payment of customer :: "<<prenium_pay;
	cout<<"\nPension ::"<<pension;
	}
	
};
class Money_back_Policy : public life_insurance
{
	public:
	int balance_money;
//A certain percentage of the sum assured will be paid to you periodically throughout the term as survival benefit.
//After the expiry of the term, you get the balance amount as maturity proceeds.
//Your family gets the entire sum assured in case of death during the policy period and this is regardless of the survival benefit payments made.
   void setdata_m()
	   {
	   	cout<<"\nEnter security year upto how many years do you want that security ::";
		cin>>security_year;
		cout<<"Enter the amount of prenium payment:";
		cin>>prenium_pay;
		cout<<"Balance money you have ::";
		cin>>balance_money;
	}
	void readdata_m()
	{
	cout<<"\nSecurity year ::"<<security_year;
	cout<<"\nPrenium payment of customer :: "<<prenium_pay;
	cout<<"\nBalance money ::"<<balance_money;
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
//Motor insurance is for your car or bike what health insurance is for your health.
//It is a general insurance cover that offers financial protection to your vehicles from loss due to accidents,
// damage, theft, fire or natural calamities
//You can also get motor insurance for your commercial vehicles.
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
	int sum_assured_money;
    char type_of_plan[80],location_of_travel[80];
   	//Travelling against the advice of the physician -Baggage delay for less than 24 hours 
	  // -Psychological illness or self-inflicted injuries during your trip -War in international locations 
	   //-Participation in hazardous sports like bungee jumping, parachuting, etc.
	   void traveldata()
	   {
	   	cout<<"\nSum assured money ::";
	   	cin>>sum_assured_money;
	   	cout<<"\nTravel insurance ::";
	   	cin.getline(type_of_plan,80);
	   	cout<<"\nlocation of travel ::";
	   	cin.getline(location_of_travel,80); 
	   	cout<<"\nfinancial_compensation ::";
	   	cin>>financial_compensation;
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
int main()
{
	char choice,sel,c,s,n;
	char f;
	int select;
	whole_life_term_insurance w1;
	pension_plan_insurance p1;
	Money_back_Policy m1;
	motor_insurance motor1,motor2;
	Travel_Insurance t1;
	Home_Insurance h1;
	
	 
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
				cout<<"\nDetails "<<endl;
				w1.setdata_w();
				w1.readdata_w();	
			}
			else
			{
				if(select == 2)
				{
					cout<<"\npension plan insurance"<<endl;
					cout<<"\nDetails "<<endl;
				    p1.setdata_p();
				    p1.readdata_p();
				
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
	

}

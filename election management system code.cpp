#include<iostream>
#include<string.h>
using namespace std;
class voterid
{
	public: 
	    char id[6];
	    public: char temp[7];
	            char tempe[7];
	            char sume[7];
	    public:  char resu[5];
	  public:  
	     void  voterdetails();
};


class display
{
	public: char ash[7];
	  public: int ch;      
	public:
		 void partieslist();
		 void text();
};
void voterid::voterdetails()
{
	cout<<"Enter your voter id: "<<endl;
	cin>>id;
	cout<<"\n";
	char temp[7]={"A1234"};
	char sume[7]={"B1245"};
	char tempe[7]={"C1210"};
    if(strcmp(id,temp)==0)
	{
		cout<<"NAME: DAVID"<<endl;
		cout<<"DOB: 5-12-2003"<<endl;
		cout<<"AGE: 18 YEARS"<<endl;
		cout<<"FATHER'S NAME: WALTER DAVID"<<endl;
		cout<<"GENDER: MALE\n"<<endl;	
		
	}
	else if(strcmp(id,sume)==0)
	{
		cout<<"NAME: NIKHIL"<<endl;
		cout<<"DOB: 21-10-2002"<<endl;
		cout<<"AGE: 19 YEARS"<<endl;
		cout<<"FATHER'S NAME: RAKESH SINGH"<<endl;
		cout<<"GENDER: MALE\n"<<endl;
	}
	else if(strcmp(id,tempe)==0)
	{
	     cout<<"NAME: ASHWINI"<<endl;
		cout<<"DOB: 21-10-2002"<<endl;
		cout<<"AGE: 19 YEARS"<<endl;
		cout<<"FATHER'S NAME: RAKESH SINGH"<<endl;
		cout<<"GENDER: FEMALE\n"<<endl;	
	}
	else
	{
		cout<<"**INVALID VOTER ID**"<<endl;
	}
	cout<<"**Enter 'YES' if the above details are correct and to continue**"<<endl;
	cin>>resu;
	cout<<"\n";
}

void display::partieslist()
{
	     cout<<"**POLITICAL PARTIES YOU CAN VOTE TO IS LISTED BELOW**"<<endl;
	     cout<<" "<<endl;
	   	cout<<"1. Bharatiya janatha party(BJP)"<<endl;
	   	cout<<" "<<endl;
	   	cout<<"2. Indian National Congress(INC)"<<endl;
	   	cout<<" "<<endl;
	   	cout<<"3. Jantha Dhal(JDS)"<<endl;
	   	cout<<" "<<endl;
	   	cout<<"4. Others"<<endl;
	   	cout<<" "<<endl;
	   	
	  cout<<"*Vote for a party*"<<endl;
	  cin>>ch;
	  switch(ch)
	  {
	  	
	  	 case 1:    cout<<"You have voted for BJP."<<endl;
	  	         cout<<"\n";
	  	        cout<<"Thank you for your valuable contribution"<<endl; 
	  	         cout<<"\n";
				  break;
		case 2: cout<<"You have voted for INC."<<endl;
		        cout<<"\n";
	  	        cout<<"Thank you for your valuable contribution"<<endl;	
	  	         cout<<"\n";
				  break;
		case 3: cout<<"You have voted for JDS."<<endl;
		        cout<<"\n";
	  	        cout<<"Thank you for your valuable contribution..."<<endl;
	  	         cout<<"\n";
				  break;
		case 4: cout<<"You have voted for others."<<endl;
		        cout<<"\n";
		         cout<<"Thank you for your valuable contribution"<<endl;	
				  	 cout<<"\n";
				  break;
		default: cout<<"Invalid option chosen."<<endl;		  		  		  		    	    
		   }	   
}

void display::text()
{
	ash[0]='y';ash[1]='e';ash[2]='s';
}
	   	
int main()
{
	
	int res;
	voterid obj1;
	display obj2;
	cout<<"\n                                          **ELECTION MANAGEMENT SYSTEM***            \n"<<endl;
	    do{
		cout<<"Type '1' if your are 18+ *AND*  Type '2' if your are below 18"<<endl;
		cin>>res;
		if(res==1)
		{
			obj1.voterdetails();
		}
       else 
		{
			cout<<"Your are not eligible to vote."<<endl;
			exit(0);
		}
		obj2.text();
		if(strcmp(obj2.ash,obj1.resu)==0)
		{
		obj2.partieslist();	
		}
	  else
	  {
	  	cout<<"**RE-ENTER YOUR CHOICES**"<<endl;
		  }	
  }while(obj2.ch!=7);		  
	return 0;
}

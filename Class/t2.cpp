#include<iostream>
using namespace std;

class oe
{
	private:
		int number;
		
	public:
		void get()
		{
			cout<<"\n Enter number to check : ";
			cin>>number;
		}
		
		void display()
		{
			if(number%2==0)
			{
				cout<<"\n Entered number is even";
			}
			else
			{
				cout<<"\n Entered number is odd";
			}
		}
};

class year
{
	private:
		int year;
		
	public:
		void get()
		{
			cout<<"\n Enter year you want to check : ";
			cin>>year;
		}
		
		void display()
		{
			if(year%4==0)
			{
				cout<<"\n Entered year is leap year";
			}
			else
			{
				cout<<"\n Entered year is not a leap year";
			}
		}
};

class vote
{
	private:
		int age;
		
	public:
		void get()
		{
			cout<<"\n Enter your age : ";
			cin>>age;
		}
		
		void display()
		{
			if(age<18)
			{
				cout<<"\n You are not Eligible for voting";
			}
			else
			{
				cout<<"\n You are Eligible for voting";
			}
		}
};

class menu
{
	public:
		void opt()
		{
			cout<<"\n\n ********** M E N U **********";
			cout<<"\n 1.Odd/Even Check";
			cout<<"\n 2.Leap Year Check";
			cout<<"\n 3.Voting Age Check";
			cout<<"\n 4.Exit Menu";
			cout<<"\n *****************************";
		}
};



int main()
{
	int ch;
	
	for(int i=1;i==1;)
	{
		

	 menu objmenu;
	 objmenu.opt();
	 
	 cout<<"\n Enter your choice : ";
	 cin>>ch;
	 
	 switch(ch)
	 {
	 	case 1:
	 		oe objoe;
	 		objoe.get();
	 		objoe.display();
	 		break;
	 		
	 	case 2:
	 		year objyear;
	 		objyear.get();
	 		objyear.display();
	 		break;
	 		
	 	case 3:
	 		vote objvote;
	 		objvote.get();
	 		objvote.display();
	 		break;
	 		
	 	case 4:
	 		i=0;
	 		break;
	 		
	 	default:
	 		cout<<"\n Wrong Choice !!";
	 }
}
}

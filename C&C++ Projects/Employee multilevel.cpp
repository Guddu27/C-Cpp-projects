#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	private:
		int eno;
		char name[30];
		char mn[12];
		
	public:
		
		employee()
		{
			cout<<"\n************** Employee D-Constructor **************";
			eno=0;
			strcpy(name,"xxx-xxx");
			strcpy(mn,"xxx-xxx");
		}
		
		employee(int e_no, char *n, char *mob)
		{
			cout<<"\n ************ Employee P-Constructor ***************";
			eno=e_no;
			strcpy(name,n);
			strcpy(mn,mob);
		}
		
		void get()
		{
			
			cout<<"\n ************* Employee Get **********************";
			
			cout<<"\n Enter Employee No : ";
			cin>>eno;
			
			cout<<"\n Enter Employee Name : ";
			gets(name);
			gets(name);
			
			cout<<"\n Enter Mobile Number : ";
			gets(mn);
		}
		
		
		void display()
		{
			cout<<"\n************** Employee Display *******************";
			
			cout<<"\n Employee Number : "<<eno;
			
			cout<<"\n Employee Name : ";
			puts(name);
			
			cout<<"\n Employee Mobile Number : ";
			puts(mn);
		}
		
		~employee()
		{
			cout<<"\n*********** Destructor ***********";
		}
};


class worker:public employee
{
	private:
		char desg[30];
		int noday;
		float perday;
		float bs;
		float salary;
		
	public:
		
		worker()
		{
			cout<<"\n************** Worker D-Constructor ************";
			strcpy(desg,"xxx-xxx");
			noday=0;
			salary=0;
		}
		
		worker(int e_no, char *n, char *mob, char *des, int nday, float sal):employee(e_no,n,mob)
		{
			cout<<"\n************** Worker P-Constructor *************";
			strcpy(desg,des);
			noday=nday;
			salary=sal;
		}
		
		
		void get()
		{
			employee::get();
			cout<<"\n*********** Worker Get *************";
			
			cout<<"\n Enter Designation : ";
			gets(desg);
			
			cout<<"\n Enter No of Working Days : ";
			cin>>noday;
			
			cout<<"\n Enter Basic Salary : ";
			cin>>bs;
			
			cout<<"\n Enter Per-Day Salary : ";
			cin>>perday;
		}
		
		void display()
		{
			employee::display();
			
			cout<<"\n*********** Worker Display *************";
			
			cout<<"\n Designation :";
			puts(desg);
			
			cout<<"\n No of Working Days : "<<noday;
			
			cout<<"\n Per-Day Salary : "<<perday;
			
			salary=bs+(perday*noday);
			
			cout<<"\n Salary = "<<salary;
		}
		
		~worker()
		{
			cout<<"\n ************** Destructor ***********";
		}
};


int main()
{
	worker obj;
	worker objp(01,"Guddu","6969-6969","Kamgaar",1,100);
	
	obj.display();
	objp.display();
	
	obj.get();
	obj.display();
}

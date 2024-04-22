#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		char name[30];
		int r_no;
		
	public:
		
		void get()
		{
			cout<<"\n Enter Name : ";
			gets(name);
			
			cout<<"\n Enter Roll No : ";
			cin>>r_no;
		}
		
		void display()
		{
			cout<<"\n\n ************** OUTPUT ***************";
			cout<<"\n Student name : ";
			puts(name);
			
			cout<<"\n Roll No : "<<r_no;
		}
};

int main()
{
	student obj;
	obj.get();
	obj.display();
}

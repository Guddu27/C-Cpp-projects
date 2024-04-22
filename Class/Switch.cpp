#include<iostream>
using namespace std;


// Sum block;
class sum
{
	private:
		int num1,num2,sum;
		
	public:
		void get()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			
			cout<<"\n Enter num2 : ";
			cin>>num2;
		}
		
		void cal()
		{
			sum=num1+num2;
		}
		
		void out()
		{
			cout<<"\n Sum : "<<sum;
		}
};

//Sub block

class sub
{
	private:
		int num1,num2,sub;
		
	public:
		void get()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			
			cout<<"\n Enter num2 : ";
			cin>>num2;
		}
		
		void cal()
		{
			sub=num1-num2;
		}
		
		void out()
		{
			cout<<"\n Sub : "<<sub;
		}
};

//Mul block

class mul
{
	private:
		int num1,num2,mul;
		
	public:
		void get()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			
			cout<<"\n Enter num2 : ";
			cin>>num2;
		}
		
		void cal()
		{
			mul=num1*num2;
		}
		
		void out()
		{
			cout<<"\n Mul : "<<mul;
		}
};


// Div block
class div
{
	private:
		int num1,num2,div;
		
	public:
		void get()
		{
			cout<<"\n Enter num1 : ";
			cin>>num1;
			
			cout<<"\n Enter num2 : ";
			cin>>num2;
		}
		
		void cal()
		{
			div=num1/num2;
		}
		
		void out()
		{
			cout<<"\n Div : "<<div;
		}
};


// Menu block
class menu
{
	public:
		void opt()
		{
			cout<<"\n********** M E N U **********";
			cout<<"\n 1.Sum";
			cout<<"\n 2.Sub";
			cout<<"\n 3.Mul";
			cout<<"\n 4.Div";
			cout<<"\n 5.Exit Menu";
			cout<<"\n*****************************";
		}
};


// Making obj in main and calling it further...

int main()
{
	for(int i=1;i==1;)
	{
		
	
	menu objmenu;
	objmenu.opt();
	
	
	int ch;
	
	cout<<"\n Enter your choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			sum objsum;
			objsum.get();
			objsum.cal();
			objsum.out();
			break;
			
		case 2:
			sub objsub;
			objsub.get();
			objsub.cal();
			objsub.out();
			break;
			
		case 3:
			mul objmul;
			objmul.get();
			objmul.cal();
			objmul.out();
			break;
			
		case 4:
			div objdiv;
			objdiv.get();
			objdiv.cal();
			objdiv.out();
			break;
			
		case 5:
			i=0;
			break;
			
		default:
			cout<<"\n Wrong Choice !!";
			
	}
}
}

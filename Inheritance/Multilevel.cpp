#include<iostream>
using namespace std;

class first
{
	private:
		int fn;
		
	public:
		
		first()
		{
			cout<<"\n ********** First Default Constructor **********";
			fn=0;
		}
		
		first(int l)
		{
			cout<<"\n ********** First para Constructor *************";
			fn=l;
		}
		
		void get()
		{
			cout<<"\n********* First get ***********";
			cout<<"\n Enter first number : ";
			cin>>fn;
		}
		
		void display()
		{
			cout<<"\n ******** First Display *********";
			cout<<"\n First number : "<<fn;
		}
		
		~first()
		{
			cout<<"\n ********** First Destroy*";
		}
};



class second: public first
{
	private:
		int sn;
		
	public:
		
		second():first()
		{
			cout<<"\n ********** Second Default Constructor **********";
			sn=0;
		}
		
		second(int l, int m):first(l)
		{
			cout<<"\n ********** Second para Constructor *************";
			sn=m;
		}
		
		void get()
		{
			first::get();
			cout<<"\n********* Second get ***********";
			cout<<"\n Enter Second number : ";
			cin>>sn;
		}
		
		void display()
		{
			first::display();
			cout<<"\n ******** Second Display *********";
			cout<<"\n Second number : "<<sn;
		}
		
		~second()
		{
			cout<<"\n ********** Second Destroy*";
		}
};


class third: public second
{
	private:
		int tn;
		
	public:
		
		third():second()
		{
			cout<<"\n ********** Third Default Constructor **********";
			tn=0;
		}
		
		third(int l, int m, int n):second(l,m)
		{
			cout<<"\n ********** Third para Constructor *************";
			tn=n;
		}
		
		void get()
		{
			second::get();
			cout<<"\n********* Third get ***********";
			cout<<"\n Enter Third number : ";
			cin>>tn;
		}
		
		void display()
		{
			second::display();
			cout<<"\n ******** Third Display *********";
			cout<<"\n Third number : "<<tn;
		}
		
		~third()
		{
			cout<<"\n ********** Third Destroy*";
		}
};


int main()
{
	third obj;
	third objp(3,4,5);
	
	obj.display();
	objp.display();
	
	obj.get();
	obj.display();
}

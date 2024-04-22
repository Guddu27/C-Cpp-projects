#include<iostream>
using namespace std;

class rect
{
	private:
		float length,breadth,perimeter,area;
		
	public:
		void get()
		{
			cout<<"\n Enter length : ";
			cin>>length;
			
			cout<<"\n Enter breadth : ";
			cin>>breadth;
		}
		
		void cal()
		{
			area=length*breadth;
			perimeter=2*(length+breadth);
		}
		
		void display()
		{
			cout<<"\n Area of Recantgle : "<<area;
			cout<<"\n Perimeter of Rectangle : "<<perimeter;
		}
};

class squ
{
	private:
		float side,area,perimeter;
		
	public:
		void get()
		{
			cout<<"\n Enter Side of Square : ";
			cin>>side;
		}
		
		void cal()
		{
			area=side*side;
			perimeter=4*side;
		}
		
		void display()
		{
			cout<<"\n Area : "<<area;
			cout<<"\n Perimeter : "<<perimeter;
		}
};

class circle
{
	private:
		float radius,area,perimeter;
		
	public:
		void get()
		{
			cout<<"\n Enter Radius of Circle : ";
			cin>>radius;
		}
		
		void cal()
		{
			area=3.14*(radius*radius);
			perimeter=2*3.14*radius;
		}
		
		void display()
		{
			cout<<"\n Area : "<<area;
			cout<<"\n Perimeter : "<<perimeter;
		}
};

class menu
{
	public:
		void opt()
		{
			cout<<"\n\n ********** M E N U **********";
			cout<<"\n 1.Rectangle";
			cout<<"\n 2.Square";
			cout<<"\n 3.Circle";
			cout<<"\n 4.Exit Menu";
			cout<<"\n********************************";
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
			rect objrect;
			objrect.get();
			objrect.cal();
			objrect.display();
			break;
			
		case 2:
			squ objsqu;
			objsqu.get();
			objsqu.cal();
			objsqu.display();
			break;
			
		case 3:
			circle objcircle;
			objcircle.get();
			objcircle.cal();
			objcircle.display();
			break;
			
		case 4:
			i=0;
			break;
			
		default:
			cout<<"\n Wrong Choice !!";
	}
}
}

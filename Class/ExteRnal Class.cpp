#include<iostream>
using namespace std;

//Rectangle

template<class t1>
class rect
{
	private:
		t1 length,breadth,perimeter,area;
		
	public:
		void get();
		void cal();
		void display();
		~rect();
		
};

//External Class

	template<class t1>
	void rect<t1>::get()
	{
		cout<<"\n ********** RECTANGLE **********";
		cout<<"\n Enter length : ";
		cin>>length;
		
		cout<<"\n Enter breadth : ";
		cin>>breadth;
	}
	
	template<class t1>
	void rect<t1>::cal()
	{
		perimeter=2*(length+breadth);
		area=length*breadth;
	}
	
	template<class t1>
	void rect<t1>::display()
	{
		cout<<"\n Area : "<<area;
		cout<<"\n Perimeter : "<<perimeter; 
	}
	
	template<class t1>
	rect<t1>::~rect()
	{
		cout<<"\n\n ********** Destroyer **********";
	}
	
	
	
//Square
	
template<class t2>
class squ
{
	private:
		t2 side,perimeter,area;
		
	public:
		void get();
		void cal();
		void display();
		~squ();
		
};

//External Class

	template<class t2>
	void squ<t2>::get()
	{
		cout<<"\n\n ********** SQUARE **********";
		cout<<"\n Enter side : ";
		cin>>side;
		
		
	}
	
	template<class t2>
	void squ<t2>::cal()
	{
		perimeter=4*side;
		area=side*side;
	}
	
	template<class t2>
	void squ<t2>::display()
	{
		cout<<"\n Area : "<<area;
		cout<<"\n Perimeter : "<<perimeter; 
	}
	
	template<class t2>
	squ<t2>::~squ()
	{
		cout<<"\n ********** Destroyer **********";
	}
	
	
// Circle

template<class t3>
class circle
{
	private:
		t3 radius,perimeter,area;
		
	public:
		void get();
		void cal();
		void display();
		~circle();
		
};

// External Class


	template<class t3>
	void circle<t3>::get()
	{
		cout<<"\n\n ********** CIRCLE **********";
		cout<<"\n Enter Radius : ";
		cin>>radius;
		
		
	}
	
	template<class t3>
	void circle<t3>::cal()
	{
		perimeter=2*(3.14*radius);
		area=3.14*(radius*radius);
	}
	
	template<class t3>
	void circle<t3>::display()
	{
		cout<<"\n Area : "<<area;
		cout<<"\n Perimeter : "<<perimeter; 
	}
	
	template<class t3>
	circle<t3>::~circle()
	{
		cout<<"\n ********** Destroyer **********";
	}

int main()
{
	rect <float>objr;
	objr.get();
	objr.cal();
	objr.display();
	
	squ <float>objs;
	objs.get();
	objs.cal();
	objs.display();
	
	circle <float>objc;
	objc.get();
	objc.cal();
	objc.display();
}

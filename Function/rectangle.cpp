/*
//WAp to find area & perimeter of rectangle 

#include<iostream>

using namespace std;

int main()
{
	float l,b,a,p;
	
	cout<<"\n Enter l = ";
	cin>>l;
	cout<<"\n Enter b = ";
	cin>>b;
	
	a=l*b;
	p=2*(l+b);
	
	cout<<"\n l ="<<l;
	cout<<"\n b ="<<b;
	cout<<"\n a ="<<a;
	cout<<"\n p ="<<p;
	
	
}
*/

/*
//WAp to find area & perimeter of rectangle  by using function print result in function
//void type


#include<iostream>

using namespace std;


	//fun declaration / function definationl
void	rectangle(float l,float b)
{
	float a,p;
		
	a=l*b;
	p=2*(l+b);
	
	cout<<"\n l ="<<l;
	cout<<"\n b ="<<b;
	cout<<"\n a ="<<a;
	cout<<"\n p ="<<p;
}
int main()
{
	float l,b,a,p;
	
	cout<<"\n Enter l = ";
	cin>>l;
	cout<<"\n Enter b = ";
	cin>>b;

	//fun call
	rectangle(l,b);
	
}

*/


//WAp to find area & perimeter of rectangle  by using function print result in function
//void type


#include<iostream>

using namespace std;


	//fun declaration 
	void rectangle(float l,float b);

int main()
{
	float l,b,a,p;
	
	cout<<"\n Enter l = ";
	cin>>l;
	cout<<"\n Enter b = ";
	cin>>b;

	//fun call
	rectangle(l,b);
	
}
	//function definationl
void rectangle(float l,float b)
{
	float a,p;
		
	a=l*b;
	p=2*(l+b);
	
	cout<<"\n l ="<<l;
	cout<<"\n b ="<<b;
	cout<<"\n a ="<<a;
	cout<<"\n p ="<<p;
}

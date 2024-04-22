#include<iostream>
using namespace std;

class student
{
	private:
		int rno;
		char name[30];
		char mno[12];
		
	public:
		void get()
		{
			cout<<"\n\n *********** Student-Get ***********";
			
			cout<<"\n Enter Roll No : ";
			cin>>rno;
			
			cout<<"\n Enter Student Name : ";
			gets(name);
			gets(name);
			
			cout<<"\n Enter Mobile No : ";
			gets(mno);
			
		}
		
		void display()
		{
			cout<<"\n\n ************** Student-Out *************";
			
			cout<<"\n Roll No : "<<rno;
			
			cout<<"\n Name : ";
			puts(name);
			
			cout<<"\n Mobile No : ";
			puts(mno);	
		}

	int rollno()
	{
		return rno;
	}

};



//**************************************************************

class fy:public student
{
	private:
		int fys1;
		int fys2;
		int fys3;
		float fyavg;
		
	public:
		void get()
		{
			student::get();
			
			cout<<"\n\n ************** FY-Get ************";
			
			cout<<"\n Enter Marks of FY Sub 1 : ";
			cin>>fys1;
			
			cout<<"\n Enter Marks of FY Sub 2 : ";
			cin>>fys2;
			
			cout<<"\n Enter Marks of FY Sub 3 : ";
			cin>>fys3;
		}
		
		void display()
		{
			student::display();
			
			cout<<"\n\n **************** FY-Out ***************";
			
			cout<<"\n FY S1 : "<<fys1;
			cout<<"\n FY S2 : "<<fys2;
			cout<<"\n FY S3 : "<<fys3;
			
			fyavg=(fys1+fys2+fys3)/3.0;
			
			cout<<"\n Average FY Marks : "<<fyavg;
		}
};

//**************************************************************

class sy:public fy
{
	private:
		int sys1;
		int sys2;
		int sys3;
		float syavg;
		
	public:
		void get()
		{
			fy::get();
			
			cout<<"\n\n *************** SY-Get ****************";
			
			cout<<"\n Enter Marks of SY Sub 1 : ";
			cin>>sys1;
			
			cout<<"\n Enter Marks of SY Sub 2 : ";
			cin>>sys2;
			
			cout<<"\n Enter Marks of SY Sub 3 : ";
			cin>>sys3;
		}
		
		void display()
		{
			fy::display();
			
			cout<<"\n\n **************** SY-Out ***************";
			
			cout<<"\n SY S1 : "<<sys1;
			cout<<"\n SY S2 : "<<sys2;
			cout<<"\n SY S3 : "<<sys3;
			
			syavg=(sys1+sys2+sys3)/3.0;
			
			cout<<"\n Average SY Marks : "<<syavg;
		}
};


//**************************************************************

class ty:public sy
{
	private:
		int tys1;
		int tys2;
		int tys3;
		float tyavg;
		
	public:
		void get()
		{
			sy::get();
			
			cout<<"\n\n *************** TY-Get ****************";
			
			cout<<"\n Enter Marks of TY Sub 1 : ";
			cin>>tys1;
			
			cout<<"\n Enter Marks of TY Sub 2 : ";
			cin>>tys2;
			
			cout<<"\n Enter Marks of TY Sub 3 : ";
			cin>>tys3;
		}
		
		void display()
		{
			sy::display();
			
			cout<<"\n\n **************** TY-Out ***************";
			
			cout<<"\n TY S1 : "<<tys1;
			cout<<"\n TY S2 : "<<tys2;
			cout<<"\n TY S3 : "<<tys3;
			
			tyavg=(tys1+tys2+tys3)/3.0;
			
			cout<<"\n Average TY Marks : "<<tyavg;
		}
};


ty obj[6];
int count=0;


void add();
void disp();
void search();
void delet();
void insert();
void edit();
void fileopen();
void fileclose();



int main()
{
	int ch;
	
	fileopen();
	
	for(int i=1;i==1;)
	{
		cout<<"\n\n ***************** MENU *****************";
		cout<<"\n 1.Add";
		cout<<"\n 2.Display";
		cout<<"\n 3.Search";
		cout<<"\n 4.Delet";
		cout<<"\n 5.Insert";
		cout<<"\n 6.Edit";
		cout<<"\n 7.Exit Menu";
		cout<<"\n *******************************************";
		
		cout<<"\n\n Enter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
		case 1:
			add();
			break;
			
		case 2:
			disp();
			break;
			
		case 3:
			search();
			break;
			
		case 4:
			delet();
			break;
			
		case 5:
			insert();
			break;
			
		case 6:
			edit();
			break;
			
		case 7:
			
			// Using 'fileclose()' function to store in file
			
			fileclose();
			i=0;
			break;
			
		default:
			cout<<"\n Wrong Choice !!!";
		}
	}
	
}


void add()
{
	cout<<"\n --------ADD---------";
	
	// Using count for array location
	
	if(count<5)
	{
		obj[count].get();
		count++;
	}
	else
	{
		cout<<"\n Space Full !!!";
	}
}


void disp()
{
	cout<<"\n -------- DISP ----------";
	
	if(count==0)
	{
		cout<<"\n EMPTY !!!";
	}
	else
	{
		// Using for loop for element sequence
		
		for(int i=0;i<count;i++)
		{
			cout<<"\n\n ----------- ELEMENT "<<i+1<<" -----------";
			
			// Using 'i' for element display
			 
			obj[i].display();
		}
	}
}


void search()
{
	cout<<"\n ------------ SEARCH --------------";
	
	if(count==0)
	{
		cout<<"\n EMPTY !!!";
	}
	else
	{
		int r,flag=0;
		
		// Taking input of Roll No in 'r'
		
		cout<<"\n Search by Roll No : ";
		cin>>r;
		
		for(int i=0;i<count;i++)
		{
			if(obj[i].rollno()==r)
			{
				// Using 'flag' as checkbox
				
				obj[i].display();
				flag=1;
			}
		}
		
		if(flag==0)
		{
			cout<<"\n No Match Found !!! ";
		}
	}
}



void delet()
{
	cout<<"\n ----------- DELET -----------";
	
	if(count==0)
	{
		cout<<"\n EMPTY !!!";
	}
	else
	{
		int r,flag=0;
		
		cout<<"\n Search by Roll No : ";
		cin>>r;
		
		for(int i=0;i<count;i++)
		{
			// Checking by roll no
			
			if(obj[i].rollno()==r)
			{
				obj[i].display();
				flag=1;
			}
			
			// If 'flag==1' for deletion process
			
			if(flag==1)
			{
				// This makes the array to step backward
				
				for(int j=i;j<count;j++)
				{
					obj[j]=obj[j+1];
				}
				count--;
				break;
			}
		}
		
		if(flag==0)
		{
			cout<<"\n No Match Found !!!";
		}
	}
}


void insert()
{
	cout<<"\n ----------- INSERT ----------";
	
	if(count==0)
	{
		cout<<"\n EMPTY !!!";
	}
	else
	{
		int r,flag=0;
		
		cout<<"\n Search By Roll No : ";
		cin>>r;
		
		for(int i=0;i<count;i++)
		{
			if(obj[i].rollno()==r)
			{
				obj[i].display();
				flag=1;
			}
			
			// Using 'flag==1' for Insertion process
			
			if(flag==1)
			{
				
				// This makes the Array location to step forward
				
				for(int j=count+1;j>i;j--)
				{
					obj[j]=obj[j-1];
				}
				
				// Using '.get()' to insert new Element
				
				obj[i+1].get();
				count++;
				break;
			}
		}
		
		if(flag==0)
		{
			cout<<"\n No Match Found !!!";
		}
	}
}


void edit()
{
	cout<<"\n ----------- EDIT ------------";
	
	if(count==0)
	{
		cout<<"\n EMPTY !!!";
	}
	else
	{
		int r,flag=0;
		
		cout<<"\n Search By Roll No : ";
		cin>>r;
		
		for(int i=0;i<count;i++)
		{
			if(obj[i].rollno()==r)
			{
				
				// Using '.get()' to Modify previous Element
				
				obj[i].display();
				obj[i].get();
				flag=1;
			}
		}
		
		if(flag==0)
		{
			cout<<"\n No Match Found !!!";
		}
	}
}


void fileopen()
{
	FILE *fp;
	
	// Using 'obj1' for data copying
	
	ty obj1;
	
	fp=fopen("e:\\Sarthakfiles\\fy-sy-ty.txt","r");
	
	count=0;
	while(fread(&obj1,sizeof(obj1),1,fp)!=0)
	{
		// Copying from 'obj1'
		
		obj[count]=obj1;
		count++;
	}
	
	fclose(fp);
}


void fileclose()
{
	FILE *fp;
	
	// Here'w' vanishes the old files
	
	fp=fopen("e:\\Sarthakfiles\\fy-sy-ty.txt","w");
	
	for(int i=0;i<count;i++)
	{
		fwrite(&obj[i],sizeof(obj[1]),1,fp);
	}
	
	fclose(fp);
}

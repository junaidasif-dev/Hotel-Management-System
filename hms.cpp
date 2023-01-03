#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void mainmenu()
{
	cout<<"__________________"<<endl;
	  cout<<"<<<WELCOME TO NUML HEIGHTS>>>"<<endl;
	  cout<<"___THE NAME OF QUALITY___"<<endl;
	  cout<<"press 1 for seeing categories of rooms"<<endl;
	  cout<<"press 2 for check-in"<<endl;
	  cout<<"press 3 for displaying your digital reservation ticket"<<endl;
	  cout<<"press 4 to exit"<<endl;
	cout<<"_________________"<<endl;
}

void booking()
{
	
	cout<<"----AVAILABLE ROOMS----"<<endl;
		
cout<<  "   Floor	 "<<	"    RENT        "<<"ROOM TYPE      "<<endl;
cout<<  "Ground floor"<<	"	25,000       "<<"BUSSINESS CLASS  "<<		"  press A"<<endl;
cout<<  " 1st floor  "<<	"	19,500       "<<"EXECUTIVE CLASS  "<<		"  press B"<<endl;
cout<<  " 2nd floor  "<<	"	15,000       "<<" ECONOMY ROOM    "<<	    "  press C"<<endl;

	cout<<endl;
	cout<<"__________________"<<endl;

}
struct information
{
	char fname[20];
	char lname[20];
	char cnic[20];
	int age;
	int room_no;
	int price;
	char account_no[30];
	char date[15];
	
	
	void input()
	{
	char press;
	int i;
	cout<<"                                 Which ROOM you want to book?                                                    "<<endl;
	cout<<"(press \'A\' for business class room, press \'B\' for executive class rooms, press \'C\' for economy class rooms)"<<endl;
	cin>>press;
	if(press=='A'||press=='a')
	{
	cout<<"YOU SELECTED BUSSINESS CLASS ROOM"<<endl;
	for(i=1;i<=10;i++)
	cout<<i<<"\t";
	cout<<endl;
	
	cout<<"Choose your room:";
	cin>>i;
	cout<<endl;
	cout<<"Room no:"<<i<<"     		     	Price:  25,000"<<endl;
	cout<<"For confirm your reservation, enter your information"<<endl;
	}
else if(press=='B'||press=='b')
   {
	cout<<"YOU SELECTED EXECUTIVE CLASS ROOM"<<endl;
	for(i=11;i<=20;i++)
	cout<<i<<"\t";
	cout<<endl;
	cout<<"Choose your room:";
	cin>>i;
	cout<<"Room no:"<<i<<"     		     	Price:  19,500"<<endl;
	cout<<"For confirm your reservation, enter your information"<<endl;	   
	}
	
else if(press=='C'||press=='c')
   {   
	cout<<"YOU SELECTED ECONOMY CLASS ROOM"<<endl;
	for(i=21;i<=30;i++)
	cout<<i<<"\t";
	cout<<endl;
	cout<<"Choose your room:";
	cin>>i;
	cout<<"Room no:"<<i<<"     		     	Price:  15,000"<<endl;
	cout<<"For confirm your reservation, enter your information"<<endl;
	}

	else
	{
		cout<<"SORRY! WRONG CHOICE"<<endl;
	}
		cout<<"Enter your first name: ";
		cin>>fname;
		cout<<"Enter your last name: ";
		cin>>lname;
		cout<<"Enter your CNIC No: "<<"underscores allowed only: ";
		cin>>cnic;
		cout<<"Enter your age: ";
		cin>>age;
		cout<<"Enter your room number that you choose from the above list:";
		cin>>room_no;
		cout<<"Enter the rent of the room that was mentioned in your choosen category: ";
		cin>>price;
		cout<<"Enter account no to pay: ";
		cin>>account_no;
		cout<<"Enter your arriving date: "<<"underscores allowed only: ";
		cin>>date;

	}

	void display()
	{
		cout<<"****NUML HEIGHTS***"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"~~~~~~ROOMS~~~~~~"<<endl;
		cout<<"_______________"<<endl;
		cout<<"NAME:	"<<fname<<"	"<<lname<<endl;
		cout<<"CNIC NO:		"<<cnic<<endl;
		cout<<"AGE:		"<<age<<endl;
		cout<<"ROOM NUMBER:		"<<room_no<<endl;
		cout<<"RENT PER DAY/NIGHT:		"<<price<<endl;
		cout<<"ACCOUNT NO:		"<<account_no<<endl;
		cout<<"ARRIVING DATE:		"<<date<<endl;
		cout<<"________________"<<endl;
		
	}
};
void save(information c)
{
	ofstream f;
	f.open("project.txt",ios::app);
	{
		f<<"NAME: "<<c.fname<<" "<<c.lname<<endl;
		f<<"CNIC NO: "<<c.cnic<<endl;
		f<<"AGE: "<<c.age<<endl;
		f<<"ROOM NO: "<<c.room_no<<endl;
		f<<"RENT: "<<c.price<<endl;
		f<<"ACCOUNT NO: "<<c.account_no<<endl;
		f<<"ARRIVING DATE : "<<c.date<<endl;
	}
	f.close();
}
void exit()
{
	cout<<"     ****THANKS FOR CHOOSING NUML HEIGHTS****      "<<endl;
	cout<<"---THANKS FOR GIVING US A CHANCE FOR HOSPITANTLY---"<<endl;
}
	

int main()
{
	char x, y,n;
	cout<<"                       ****WELCOME TO NUML HEIGHTS***                   "<<endl;
	cout<<"Are you admin or a client?(Enter \'y\' if you are admin, enter \'n\' if you are client):";
	cin>>x;
	if(x=='n')
	{
	mainmenu();

	int choice;
	cout<<"****Welcome to our hotel****"<<endl;
	cout<<"If you want to view the category of rooms, press 1..... otherwise press 4"<<endl;
	cin>>choice;
	if(choice==1)
	{
	
	{
		booking();
	}
	
	cout<<"If you want to check-in, press 2..... otherwise press 4"<<endl;
	cin>>choice;
	information c;
	if(choice==2)
	{
	
	  {
	  	c.input();
	  }
	  
	cout<<"If you want to displaying your digital reservation ticket, press 3..... otherwise press 4"<<endl;
	cin>>choice;
	

    if(choice==3)
	  {
	  	c.display();
	  	cout<<"------Your reservation is confirm, Thank You------"<<endl;
	  }
	  
	
	  save(c);
	}
	}
	}
	else if(x=='y')
	{
		int pass;
		cout<<"Enter password";
		cin>>pass;
	}
	else
	cout<<"Sorry! Your input is wrong.";
	  
}

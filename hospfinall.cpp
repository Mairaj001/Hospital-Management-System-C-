#include<iostream>
#include <fstream>
#include<cstring>
#include<conio.h>
#include"unistd.h"
#include<time.h>
#include<windows.h>
using namespace std;
void line(int num, char ch){
	cout<<"\n";
	for (int i = 0 ; i < num ; i++){
		cout << ch;
	}
	cout << "\n";
}
void font(int widht, int height )
{
		CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = widht;                   // Width of each character in the font
cfi.dwFontSize.Y = height;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Ariel"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

void escape(int i)
{
	for(int j=0;j<=i;j++)
	{
		cout<<"\t";
	}
}
void gotoxy(int x, int y)
{
	COORD d;
	d.X=x;
	d.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),d);
}
void load()
{
 
  char a=219;
  
  gotoxy(58,15);
cout<<"LOADING\n";
 gotoxy(45,17);
  for(int i = 0 ; i < 32 ; i++){
  	cout << a ;
  	gotoxy(45+i,17);
  	Sleep(1);
  }
  gotoxy(45,19);
  system("pause");
  system("cls");
}
using namespace std;
class Hospital{
	public:
		string address;
		string licence;
		int no_of_beds,total_bed_res,no_patnt;
		public:
			Hospital();
			void hospital_detail();
			
			
		
};
Hospital::Hospital(){
	address = "Plaza 32, street 14 main markaz near Allied bank , G7 Islamabad";
	no_of_beds = 32;
	licence = "APD-732-AA001";
}
void Hospital::hospital_detail()
{
	
	cout<<"->Address : " << address <<"\n";
	cout<<"->No of doctors : 6";
	cout<<"\nTotal beds : " << no_of_beds << "\n";
	cout<<"\nLicense no : " << licence << "\n";
	cout<<"\nTimings: 24 hours\n";
};
class doctors:public Hospital{
	public:
		string doct[6];
		
	public:
//		doctors(){
//			cout << "Doctor construct \n";
//			doct[0]="Muhammad shafique";
//          doct[1]="Mairaj";
//          doct[2]="Ali";
//          doct[3]="Zohaib";
//          doct[4]="Osama";
//          doct[5]="Asad";
//          doct[6]="Omais";
//          for(int i=0;i<6;i++)
//          {
//          	doct[i]  = "Dr." + doct[i];
//		  }
		
		void doctor_details();
		void doct_1();
		void doct_2();
		void doct_3();
		void doct_4();
		void doct_5();
		void doct_6();
		void doct_names();
};
void doctors::doct_names()
{
	
         doct[0]="Muhammad_shafique";
          doct[1]="Mairaj";
          doct[2]="Ali";
          doct[3]="Zohaib";
          doct[4]="Osama";
          doct[5]="Asad";
          doct[6]="Omais";
     for(int i=0;i<6;i++)
          {
          	cout<<"\n"<<i<<". "<<doct[i];
		  }   
}
void doctors::doctor_details(){
	

             doct[0]="Muhammad_shafique";
          doct[1]="Mairaj";
          doct[2]="Ali";
          doct[3]="Zohaib";
          doct[4]="Osama";
          doct[5]="Asad";
          doct[6]="Omais";
         
          
        int k;
          do{
          	getch();
		  system("cls");
		  cout<<"\nThe availability of doctors are\n";
          for(int i=0;i<6;i++)
          {
          	cout<<"\n"<<i<<". "<<doct[i];
		  }
		
		  cout<<"\n\nEnter the key to get details of the doctors : ";
		  cin>>k;
		  
		  
		  
		  
		  switch(k)//shows timetable of doct
		  {
		  	case 1: doct_1();break;
		  	case 2: doct_2();break;
		  	case 3: doct_3();break;
		  	case 4: doct_4();break;
		  	case 5: doct_5();break;
		  	case 6: doct_6();break;
		  		
		  	
	}
		  
		  
}while(k!=7);

}

void doctors::doct_1()//
{
	string get;
	ifstream l("1.txt.txt");//doct time
	getch();
	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}
}
void doctors::doct_2()//time of doct
{
	string get;
	ifstream l("2.txt.txt");
	getch();
	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}

	
}
void doctors::doct_3()//time of doct
{
	string get;
	ifstream l("3.txt.txt");
	getch();
	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}
}
void doctors::doct_4()//time doct
{
	string get;
	ifstream l("4.txt.txt");
	getch();
	system("cls");
//	istream&seekg(streamoff offset, ios_base::seekdir dir);
//	l.seekg(6,ios::beg);
//	char m[6];
//	l.read(m,5);
//	cout<<m;
//	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}
}
void doctors::doct_5()//time of doct
{
		string get;
	ifstream l("5.txt.txt");
	getch();
	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}
	
}
void doctors::doct_6()
{
		string get;
	ifstream l("6.txt.txt");
	getch();
	system("cls");
	while(l.good())
	{
	
	getline(l,get);
	cout<<get<<endl;Sleep(200);
}
};
class patient:public doctors
{
	public:
		string bp, id, membership_id,gender,Name,doct_name;
		int age,price,doct_name_sr, n;
		public:
			patient():doctors(){
				
			};
			int get_calc_price_doct(int);
			void get_data_stream();
			void out_data_strea();// output all data
			void out_indivisual();//output br indivisual
			void online_reservation();
		    void delete_data();
		    
			
			
		
};
void patient::get_data_stream()
{
		ofstream input;
				input.open("pateint detail.txt",ios::app);
		
				cout<<"Enter the name : ";
			  	cin>>Name;    input<<Name<<endl;
			  	
				cout<<"Enter the id of the patient : ";
				cin>>id;   input<<id<<endl;
				

				
				
				cout<<"Enter the gender : ";
				cin>>gender;    input<<gender<<endl;
				
				cout<<"Enter the age : ";
				cin>>age;               input<<age<<endl;
				
				cout<<"Enter the blood pressure : ";
				cin>>bp;        input<<bp<<endl;
				cout<<"Select doctor for consult\n";
				doctors::doct_names();
				cout<<"\nEnter the sr number of the doctor : ";
				cin>>doct_name_sr;
				cout<<"\n\nPrice is generated\n";
				int s=patient::get_calc_price_doct(doct_name_sr);
				input<<s<<endl;
				input<<doct[n]<<endl;
				time_t t;
				time(&t);
				input<<ctime(&t)<<endl;
				input.close();
				
			
}
int  patient::get_calc_price_doct(int doct_name_sr)
{
	
	if(0==doct_name_sr)
	{
		n=0;
		return price=1000;
		
	}
	else if(1==doct_name_sr)
	{
		n=1;
		price=1200;
		return price;
	}
	else if(2==doct_name_sr)
	{
		n=2;
		price=1000;
		return price;
	}
	else if(3==doct_name_sr)
	{
		n=3;
		price=1600;
		return price;
	}
	else if(4==doct_name_sr)
	{
		n=4;
		return price=1200;
	}
	else if(5==doct_name_sr)
	{ n=5;
		return price=1000;
	}
	
}
void patient::out_data_strea()//working part 
{
	int n=0;
	
	ifstream get;
	get.open("pateint detail.txt");
	string k;

	while(get.good())
	{
		
		n++;
		if(get.is_open())
		{
			string a,c,d,e,f,g,h,i,j,k,m,z;
			get>>a;get>>c;get>>d;get>>e;get>>f;get>>g;get>>h;get>>i;get>>j;get>>k;get>>m;get>>z;

             cout<<"\n";
			line(115,'-');
			cout<<"\n\t\t\t\tThe details of the patient no "<<n;Sleep(200);escape(3);
			escape(3);cout<<"\n\t->Name : "<<a;Sleep(200);
			escape(3);cout<<"\n\t->Membership id : "<<c;Sleep(200);
			escape(3);cout<<"\n\t->Gender : "<<d;Sleep(200);
			escape(3);cout<<"\n\t->Age : "<<e;Sleep(200);
			cout<<"\n\t->Blood Pressure : "<<f;Sleep(200);
			cout<<"\n\t->Price : "<<g;Sleep(200);
			cout<<"\n\t->Doctor : "<<h;Sleep(200);
			cout<<"\n\t->Time : "<<i<<" "<<j<<" "<<k<<" "<<m<<" "<<z;Sleep(200);
			cout<<"\n";Sleep(200);
			line(110,'-');

			if(get.eof())
			{
				cout<<"\nEnded\n";
				break;
			}
			
		}
		

	}
	
	
}
void patient::out_indivisual()
{
	string name;
	ifstream obj;
	obj.open("pateint detail.txt");
	cout<<"->Enter the name of the patient: ";
	cin>>name;
	string getf;
	int flag=0;
	int i=0;
	
	while(obj.good())
	{
			getline(obj,getf);
		if(obj.is_open())
		{ 
		      i++;
			if(name==getf)
			{
			   	
			   	flag=1;
				string a,b,c,d,e,f,g,h,i,j,k;
				obj>>a;obj>>b;obj>>c;obj>>d;obj>>e;obj>>f;obj>>g;obj>>h;obj>>i;obj>>j;obj>>k;
				system("cls");
				gotoxy(-30,20);
				line(41,'_');
				cout<<"\n->Name: "<<getf;Sleep(300);
				cout<<"\n->MemberShip ID: "<<a;Sleep(300);
				
				cout<<"\n->Gender: "<<b;Sleep(300);
				cout<<"\n->Age: "<<c;Sleep(300);
				cout<<"\n->Blood Pressure: "<<d;Sleep(300);
				cout<<"\n->Price: "<<e;Sleep(300);
				cout<<"\n->Doctor: "<<f;Sleep(300);
				cout<<"\n->Time: "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<k;Sleep(200);
				line(40,'_');
	            		
			}
			
		}
			
	}
	if(flag==0)
	{
		system("cls");
		cout<<"Record does not exist:";
	}
	
	
}
void patient::online_reservation()
{
	ifstream get;
	get.open("user_online_appointment.txt");
	string k;
	while(get.good())
	{
		n++;
		if(get.is_open())
		{
			string a,c,d,e,f,g,h,i,j,k,m,z;
			get>>a;get>>c;get>>d;get>>e;get>>f;get>>g;get>>h;get>>i;get>>j;get>>k;get>>m;get>>z;

             cout<<"\n";
			line(115,'-');
			cout<<"\n\t\t\t\tThe details of the patient no "<<n;Sleep(200);escape(3);
			escape(3);cout<<"\n\t->Name : "<<a;Sleep(200);
			escape(3);cout<<"\n\t->Membership id : "<<c;Sleep(200);
			escape(3);cout<<"\n\t->Gender : "<<d;Sleep(200);
			escape(3);cout<<"\n\t->Age : "<<e;Sleep(200);
			cout<<"\n\t->Blood Pressure : "<<f;Sleep(200);
			cout<<"\n\t->Price : "<<g;Sleep(200);
			cout<<"\n\t->Doctor : "<<h;Sleep(200);
			cout<<"\n\t->Time : "<<i<<" "<<j<<" "<<k<<" "<<m<<" "<<z;Sleep(200);
			cout<<"\n";Sleep(200);
			line(110,'-');

			if(get.eof())
			{
				cout<<"\nEnded\n";
				break;
			}
			
		}
		

	}
	    cout<<"Enter the key Y to confirm this patient";// patient online wale ka online ka name sa save krana ha admin wlae ma 
	}


class admin: public patient{
	protected:
	string admin_name,admin_pass;
	public:
		
		
		void AdminMenu();// all data contains admin by above class
		bool passwrd();
};
bool admin::passwrd()
{

    
	cout<<"->Username=";  cin>>admin_name;
	cout<<"->password=";  cin>>admin_pass;
	if(admin_name=="admin"&&admin_pass=="1234")
	{
		return 1;
		cout<<"Login successful\n";
	}
    else 
    {
    	exit(0);
	}
	
}
void admin::AdminMenu(){
	
	
		int k;
	if(getch())
	system("cls");
	do{
		getch();
		system("cls");
	    
	Sleep(300);line(70,'*');
	Sleep(300);font(0,30);cout<<"\t\t\tA D M I N\n";
	line(70,'*');
	cout<<"\n1.See doctor TimeTable";Sleep(300);
	cout<<"\n2.Resereve patient appointment";Sleep(300);
	cout<<"\n3.See details of the patient";Sleep(300);
	cout<<"\n4.See by individual";Sleep(300);
	cout<<"\n5.See online reservation";Sleep(300);
	cout<<"\n5.See hospital details\n\n";Sleep(300);
	cout << "Input Option : ";Sleep(300);
	cin>>k;
	switch(k)
	{
		case 1: admin::doctor_details();break;
		case 2: admin::get_data_stream();break;
		case 3: admin::out_data_strea();break;
		case 4: admin::out_indivisual();break;
		case 5: admin::online_reservation();break;
		case 6: system("cls");admin::hospital_detail();break;
	}
}while(k!=7);
                                 

}
	                              
class user:public admin{
	string user_name,user_pass;
	public:
		user():user_name(""), user_pass(""){
		};
		void user_welcome();
		void user_login();
		void user_signup();
		void user_gest();
		void user_online_appointment();
		void user_online_appointment_show();
		
	
};
void user::user_online_appointment()
{
			ofstream input;
				input.open("user_online_appointment.txt",ios::app);
		
				cout<<"Enter the name : ";
			  	cin>>user_name;    input<<user_name<<endl;
			  	
				cout<<"Enter the id of the patient : ";
				cin>>id;   input<<id<<endl;
				

				
				
				cout<<"Enter the gender : ";
				cin>>gender;    input<<gender<<endl;
				
				cout<<"Enter the age : ";
				cin>>age;               input<<age<<endl;
				
				cout<<"Enter the blood pressure : ";
				cin>>bp;        input<<bp<<endl;
				
				cout<<"Select doctor for consult\n";
				doctors::doct_names();
				cout<<"\nEnter the sr number of the doctor : ";
				cin>>doct_name_sr;
				cout<<"\n\nPrice is generated\n";
				int s=patient::get_calc_price_doct(doct_name_sr);
				input<<s<<endl;
				input<<doct[n]<<endl;
				time_t t;
				time(&t);
				input<<ctime(&t)<<endl;
				input.close();
	
}
void user::user_online_appointment_show()
{
	int n=0;
    string name;	
	ifstream obj;
	obj.open("user_online_appointment.txt");
	cout<<"Enter the name :";
	cin>>name;
	string getf;
	int flag=0;

	while(obj.good())
	{
		
		
			getline(obj,getf);
		if(obj.is_open())
		{ 
		     
			if(name==getf)
			{
	          cout<<"\nyour booking is reserved as follows\n";
			   	
			   	flag=1;
				string a,b,c,d,e,f,g,h,i,j,k;
				obj>>a;obj>>b;obj>>c;obj>>d;obj>>e;obj>>f;obj>>g;obj>>h;obj>>i;obj>>j;obj>>k;
				system("cls");
				gotoxy(-30,20);
				line(41,'_');
				cout<<"\n->Name: "<<getf;Sleep(300);
				cout<<"\n->MemberShip ID: "<<a;Sleep(300);
				
				cout<<"\n->Gender: "<<b;Sleep(300);
				cout<<"\n->Age: "<<c;Sleep(300);
				cout<<"\n->Blood Pressure: "<<d;Sleep(300);
				cout<<"\n->Price: "<<e;Sleep(300);
				cout<<"\n->Doctor: "<<f;Sleep(300);
				cout<<"\n->Time: "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<k;Sleep(200);
				line(40,'_');
				getch();
	            		
			}
	
			
		}
			
	}
	if(flag==0)
	{
		
		cout<<"Record does not exist:";
		getch();
	}

}

void user::user_login(){
	string user , pass;int n=0;int m=0;
	system("cls");
	cout<<"\nEnter your credential please";
	cout<<"\n->Username:"; cin>>user;
	cout<<"\n->Password:"; cin>>pass;
	
	ifstream obj;
	obj.open("user_signup.txt");
	while(obj.good())
	{	
	if(obj.is_open())
	{
		string k, j;      // k for username   j for pass;
		obj>>k;obj>>j;
		
		if(user==k&&pass==j)
		{
			 m=1;
			cout<<" \nLogged in susscesfully\n ";
		}
		
			
		}
	}
		if(m==1)
		{
			
	      
		    do{
	        	system("cls");
//			
	        line(70,'*');
            cout<<"\n";
			cout<<"WELCOME TO THE CITY HOSPITAL\n\n";
			
        
           
	      line(70,'*');
	      cout<<"\n";
	        	cout<<"\n1.See doctor time table";
	        	cout<<"\n2.Get online appointment";
	        	cout<<"\n3.See your Reservation:";
	        	cout<<"\n4. know about us\n\n";
	        	cout << "Input Option : ";
	        	cin>>n;
	        	switch(n)
	        	{
	        		case 1:admin::doctor_details();break;
	        		case 2:user::user_online_appointment();break;      // make another file for user named as user online appointment
	        		case 3: user::user_online_appointment_show();break;                           //will work on it 
	        		case 4: break;	
				}
			}while(n!=5);
			
			
		}
	}
		
void user::user_signup(){
	system("cls");
	ofstream input;
	input.open("user_signup.txt",ios::app);
	cout<<"->Username:";
	cin>>user_name; input<<user_name<<endl;
	cout<<"->Password:";
	cin>>user_pass;   input<<user_pass<<endl;
	
	cout<<"Account created succesful.............\n";
	
}
void user::user_gest()
{
	system("cls");
	user::hospital_detail();
	}
void user::user_welcome()
{
	int s;
	do{
	getch();
	system("cls");


line(70,'*');
	cout<<"\n\n\tWELCOME TO THE CITY HOSPITAL\n\n";
line(70,'*');
	cout<<"\n1.LOGIN";
	cout<<"\n2.Signup";// search name from the file and return 1 ;
	cout<<"\n3.Continue as guest\n\n";
	cout << "Input Option : ";
	cin>>s;
	switch(s)
	{
		case 1:user_login();break; 
		case 2:user_signup();break;
		case 3:user_gest();break;
	}
	
	
}while(s!=4);
}//                                    user completed there



int main()
{

    font(0,23);
	getch();
	load();
	int s;
    admin a;
	user b;
	do{
		system("cls");
	//e
	font(0,23);
//	cout<<"\n\n******************************************************************************************";
	line(120,'*');
	cout<<"\n\n";
	escape(5);cout<<"WELCOME TO CITY HOSPITAL\n";
	time_t t;
	time(&t);
	escape(5);cout<<ctime(&t)<<"\n";
//	cout<<"\n\n********************************************************************************************";
	line(120,'*');
	cout<<"\n1.Admin";Sleep(200);
	cout<<"\n2.User";Sleep(200);
	cout<<"\n3.Credits";Sleep(200);
	cout<<"\n4.exit\n\n";Sleep(300);
	cout << "Input Option : ";Sleep(300);
	cin>>s;
	switch(s)
	{
		case 1:load();a.passwrd();a.AdminMenu();break;
		case 2:b.user_welcome();break;
		case 3:cout<<"Made by only Mairaj ahmed (.!.)\n\n";getch();break;
		
	}
	}while(s!=4);
	return 0;
}


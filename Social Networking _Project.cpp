#include<iostream>
#include<string.h>
#include<fstream>//file stream that contains the database
using namespace std;
//data members
string regname,regpass;//to register
string login_name,login_pass;//to login
string name,pass;//existing in database
// functions
int m_menu();//main menu
int l_menu();//menu after login process
int a_menu();//accept or delete friends
int reg();//registration process
int login();//login process
int friends();//view friends
int requests();//view requests
int exit();//exit the site

int m_menu()
{
	cout<<"Choose your option:"<<endl;
	cout<<"1.Register"<<endl;
	cout<<"2.Login"<<endl;
	cout<<"3.Exit the networking site"<<endl<<endl;
    int a;
    cin>>a;
    switch(a)
    {
    	case 1: 
    	reg();
    	break;
    	case 2:
    	login();
    	break;
    	case 3:
    	exit();
		break;
		default:
		cout<<"Please enter a valid option:"<<endl;
		break;	
    }
}//end of main menu

int l_menu()
{
	cout<<"1.View friend requests:"<<endl;
	cout<<"2.View existing freinds"<<endl;
	cout<<"3.Add friend"<<endl;
	cout<<"4.Block friend"<<endl;
	cout<<"5.Log out"<<endl;
	
	int b;
	cin>>b;
	switch(b)
	{
		    case 1:
			requests();
			break;
			case 2:
			friends();
			break;
			case 3:
	    	a_menu();
			break;
		    case 4:
			a_menu();					
			break;
			case 5:
			m_menu();
			break;
			default:
			cout<<"Invalid choice"<<endl;
            break;
    }
}//end of l_menu

int a_menu()
{
return 0;
}//end of a_menu

int reg()
{
cout << "Enter the username: " << endl;
getline( cin, regname ); //get the username as a input to add it to the database
cout << "Enter the password(max 6 characters)" << endl;
getline ( cin, regpass ); //gets the password to add it to the database

    if ( regpass.length() < 6) //if the password is less than 6 chars try the reg process again
    {
       cout << "The chosen password is too short!" << endl;
       cout << endl;
       reg();
    }
   else
    {
    	ofstream g ( "database.txt", ios::app ); //creating the database file and the ios::app lets you
      //write in the same file without deleting the content of the database file
	
	 if (!g.is_open())
      {
          cout << "Unable to access the database:( Sorry for the inconvinience" << endl;
         return 0;
      }
	
	else
     {
	 g << regname; //if the name and the pass are okay add them at the database
     g <<'\n';
     g << regpass<<'\n';
     g.close(); //close the database file
     cout << "You have successfully registered!" << endl;
     cout << "Enter your option" << endl;
     cout << "1.Log In." << endl;
     cout << "2.Exit the program." << endl;
     int c;
     cin>>c;
     switch(c)
     {
     	case 1:
     	login();
     	break;
     	case 2:
     	exit();
     	default:
     	cout<<"Invaid choice:"<<endl;
     	break;
	 }
    }
   }
}//end of register function
int login()
{
	ifstream f;
    f.open( "database.txt" ); //accessing the database file
   if (!f.is_open())
   { 
     cout << endl;
     cout << "Please register first!" << endl;
     m_menu();
   }
     getline(f,name, '\n'); //reading the usernames in the database
     getline(f,pass, '\n'); //reading the passwords from the database
     f.close();

cout << "Enter your username: " << endl;
getline( cin, login_name ); //the username to login
cout << "Enter your password: " << endl;
getline( cin, login_pass ); //password to login

 if ( login_name == name && login_pass == pass )
 {
  cout << endl;
  cout << "Successfully logged in! " << endl;
  cout << "Welcome, " << endl;
  cout << login_name << endl;
  l_menu();
 }
 else if ( login_name == name && login_pass != pass )
 {
  cout << endl;
  cout << "Please enter the correct password" << endl;
  login();
 }
 else if ( login_name != name && login_pass == pass )
 {
  cout << endl;
  cout << "Please enter a valid username!" << endl;
  login();
 }
}
int exit()
{
	cout<<"Please press the enter key to exit the site:"<<endl;
	return 0;
}

int requests()
{
	
}//left empty because the data depends on the user
//end of function
int friends()
{
	
}//left empty because the data depends on the user 
//end of function
int main()
{
cout<<"Welcome to my social networking site:"<<endl;
m_menu();	
cout<<"UID:18BET1027"<<endl;
}

/*DRIVER MASTER CLASS MENU AND MODIFICATION
 * Name        :DRIVERMASTER MENU AND MODIFICATION
// Author      : NAVEENKUMAR R
// Language    :C++
// Copyright   :BGSW
 */
#include <iostream>
#include<fstream>
using namespace std;
class drivermaster  //Main Class of Driver Master
{
private: //private the data members
	string Driver_Id;
		string Driver_Name;
		string Driver_license_No;
		int Driver_Charges_per_KM;
		int status;
public:
	void displaymenu();//Declare the All Function in the Driver Master class
	void addition();
	void modification();
	void retriment();
};
void drivermaster ::displaymenu()
{
	int c;
	cout<<"DRIVER DETAILS"<<endl;
	cout<<"1.ADDITION OF DRIVERS"<<endl;
	cout<<"2.RETRIMENT OF DRIVERS"<<endl;
	cout<<"3.MODIFICATION OF DRIVERS"<<endl;
	cout<<"4.EXIT"<<endl;
	cin>>c;
	switch(c)
	{
	case 1:
	{
		//ADDITION FUNCTION IS CALLING
		break;
	}
	case 2:
	{
		//RETRIMENT FUNCTION IS CALLING
		break;
	}
	case 3:
	{
		modification();//MODIFICATION FUNCTION IS CALLING
		break;
	}
	case 4:
	{
		cout<<"EXIT SUCCESSFULLY"<<endl; //Exit
		exit(0);
		break;
	}
	default:
		cout<<"Enter the correct choice";//Command For Enter the correct Option
		break;
	}
}
void drivermaster ::modification()
{
string id;//For get Driver Id from users
cout<<"MODIFICATION OF DRIVERS"<<endl;
cout<<"Enter the Driver ID to modifiy"<<endl;
cin>>id;
ifstream r;
r.open("drivermaster.txt",ios::app);//opening the file to read mode
ofstream w;
w.open("temp.txt",ios::app);//opening the file new temp file to write mode
r>>Driver_Id >> Driver_Name>>Driver_license_No>>Driver_Charges_per_KM>>status;
while(!r.eof())//reading the file Upto the end of file
{
	if(Driver_Id != id)//if the user enter id doesn't match with file the condition is save the file with read mode data
	{
		w<< Driver_Id<<" "<<Driver_Name<<" "<<Driver_license_No<<" "<<Driver_Charges_per_KM<<" "<<status;
	}
	else//it will show the modification Mode
	{
		int op;//to input of option
		cout<<"ENTER THE MODIFIY DATA"<<endl;
		cout<<"1.COST OF DRIVER"<<endl;
		cout<<"2.STATUS OF DRIVER"<<endl;
		cin>>op;
		w<<Driver_Id<<" "<<Driver_Name<<" ";//writing the data in the temp file
		switch(op)//using the switch statement to select the specific Data of Driver
		{
		case 1:
		{
			cout<<"ENTER THE MODIFIY COST PER KMS"<<endl;
			cin>>Driver_Charges_per_KM;
			break;
		}
		case 2:
		{
			cout<<"ENTER THE STATUS OF DRIVER"<<endl;
			cin>>status;
			break;
		}
		default:
			cout<<"Invaild Choice"<<endl;
			break;
		}
		w<<Driver_license_No<<" "<<Driver_Charges_per_KM<<" "<<status<<endl;//writing the data in the temp file
	}
	r>>Driver_Id >> Driver_Name>>Driver_license_No>>Driver_Charges_per_KM>>status;
	r.close();//closing the file of read mode
	w.close();//closing the file of write mode
	}
     remove("/mainfile");//removing the main file
     if (rename("temp.txt", "/main file") != 0)//rename the file
             {
                 cout << "MODIFICATION FAILED" <<endl;
             }
             else
             {
                 cout << "MODIFICATION DONE SUCCESSFULLY" << endl;
             }
}
int main()
{
	drivermaster dm;
	dm.displaymenu();
}

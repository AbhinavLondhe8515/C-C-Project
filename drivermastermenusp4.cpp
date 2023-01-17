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
		//string Dob;
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
		addition();//ADDITION FUNCTION IS CALLING
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
	int op;//to input of option
cout<<"MODIFICATION OF DRIVERS"<<endl;
cout<<"Enter the Driver ID to modifiy"<<endl;
cin>>id;
ifstream r;
r.open("Drivermaster.txt",ios::app);//opening the file to read mode
ofstream w;
w.open("temp.txt");//opening the file new temp file to write mode
r>>Driver_Id >> Driver_Name>>Driver_license_No>>Driver_Charges_per_KM>>status;
while(!r.eof())//reading the file Upto the end of file
{
	if(Driver_Id != id)//if the user enter id doesn't match with file the condition is save the file with read mode data
	{
		w<< Driver_Id<<" "<<Driver_Name<<" "<<Driver_license_No<<" "<<Driver_Charges_per_KM<<" "<<status<<endl;
	}
	else//it will show the modification Mode
	{
    	w<<Driver_Id<<" "<<Driver_Name<<" "<<Driver_license_No<<" ";//writing the data in the temp file
		cout<<"ENTER THE MODIFIY DATA"<<endl;
		cout<<"1.COST OF DRIVER"<<endl;
		cout<<"2.STATUS OF DRIVER"<<endl;
		cin>>op;

	if(op == 1)//using the if statement to select the specific Data of Driver

	{
			cout<<"ENTER THE MODIFIY COST PER KMS"<<endl;
			cin>>Driver_Charges_per_KM;
	}
		w<<Driver_Charges_per_KM<<" ";
	if(op == 2)
	{
			cout<<"ENTER THE STATUS OF DRIVER"<<endl;
			cin>>status;
	}
	     	w<<status<<endl;//writing the data in the temp file
	}
if(op>2)
{
			cout<<"Invaild Choice"<<endl;
}
	r>>Driver_Id >> Driver_Name>>Driver_license_No>>Driver_Charges_per_KM>>status;
	}
	w.close();//closing the file of read mode
	r.close();//closing the file of write mode
   if (remove("Drivermaster.txt")!=0)//removing the main file
   {
       cout<<"file not remove"<<endl;
   }

     if (rename("temp.txt", "Drivermaster.txt") != 0)//rename the file
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

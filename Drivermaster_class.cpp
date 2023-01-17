/*Driver Master Addition and Retirement
Owner : Karpagam Bangaru
Language : c++
Creation Date : 20/12/2023
Modification date: 16/01/2023
Group : LMCPPSQ01 */

#include <iostream>
#include <fstream>
#include<string>
#include <cstring>
#include<stdio.h>
using namespace std;

class Driver_Master
{
private:
	/*creating the data variables to store driver details */

	string Driver_Id;
	string Driver_Name;
	string Driver_license_No;
	string DOB;
	int Driver_Charges_per_KM;
	int status;

public:
	Driver_Master() /*Default Constructor*/
	{

	}
	Driver_Master(string Driver_Id, string Driver_Name, string Driver_license_No, string DOB, int Driver_Charges_per_KM, int status)/*Parameterised Constructor*/
	{
		this->Driver_Id = Driver_Id;
		this->Driver_Name = Driver_Name;
		this->Driver_license_No = Driver_license_No;
		this->DOB=DOB;
		this->Driver_Charges_per_KM = Driver_Charges_per_KM;
		this->status = status;
	}

	/*Getters and Setters for data variables*/

	void setDriver_Id(string Driver_Id)
	{
		this->Driver_Id = Driver_Id;
	}

	void setDriver_Name(string Driver_Name)
	{
		this->Driver_Name = Driver_Name;
	}
	void setDriver_license_No(string Driver_license_No)
	{
		this->Driver_license_No = Driver_license_No;
	}
	void setDriver_Charges_per_KM(int Driver_Charges_per_KM)
	{
		this->Driver_Charges_per_KM = Driver_Charges_per_KM;
	}
	void setStatus(int status)
	{
		this->status = status;
	}
	string getDriver_Id()
	{
		return Driver_Id;
	}
	string getDriver_Name()
	{
		return Driver_Name;
	}
	string getDriver_license_No()
	{
		return Driver_license_No;
	}
	int getDriver_Charges_per_KM()
	{
		return Driver_Charges_per_KM;
	}
	int getStatus()
	{
		return status;
	}

	/* Addition function to get driver details from user 
	and store it as a record in a text file called Drivermaster.txt*/

	void addition()
	{
		ofstream os;
		//os.open("Drivermaster.txt");
		//os.open("Drivermaster.txt",ios::app |ios::out);
		cout<<"Enter the Driver Details:"<<endl; /*Getting driver details*/

  		cout<<"Enter Driver Id"<<endl;
		cin.ignore;
		getline(cin,Driver_Id);

		cout<<"Enter Driver Name"<<endl;
		cin.ignore;
		getline(cin,Driver_Name);

		cout<<"Enter Driver license No"<<endl;
		cin.ignore;
		getline(cin,Driver_license_No);

	    cout<<"Enter DOB"<<endl;
		cin.ignore;
		getline(cin,DOB);

		cout<<"Enter Driver_Charges_per_KM"<<endl;
		cin>>Driver_Charges_per_KM;

		cout<<"Enter status"<<endl;
		cin>>status;

		os.open("Drivermaster.txt",ios::out |ios::app); /*Opening the file to write: adding driver details to text file. */
		os<<this->Driver_Id<<" "<<this->Driver_Name<<" "<<this->Driver_license_No<<" "<<this->DOB<<" "<<this->Driver_Charges_per_KM<<" "<<this->status<<" "<<endl;
        os.close(); /*Closing the file*/
		cout<<"\n\t.......DRIVER DETAILS ADDED SUCCESSFULLY ......";

	}

	/*Retirement fuction for check the age of the drivers, 15th of every month 
	to update their status if retired. Driviers retire at the age 58. */

	void retirement()
	{
		ifstream file2;
        int count = 0;int linecount = 0;int age;
        string line;

        file2.open("Drivermaster.txt",ios::in); /* Opening the file to read*/ 

        while(file2.peek()!=EOF)/*while loop that ends at the end of the file*/
        {
			getline(file2, line);
			linecount++; /*Counting the no. of lines*/
        }
		file2.close();     /*Closing the file*/   
	
		ifstream file;
        file.open("Drivermaster.txt",ios::in);     /* Opening the file to read*/ 
		
		/*While loop that breaks when count is eqaul to the line count previously obtained.
		This loop reads each attribute in a record and assigns it to the data variables respectively.
		Age of the driver is calculated and retirement criteria is checked and status is updated.
		Driver details are then added to a text file Updated.txt and count is incremented*/

		while(1)
		{
			if(linecount==count)
            {
				break;
            }
			//cout<<"hi";
			file>>Driver_Id;
            file>>Driver_Name;
			file>>Driver_license_No;
			file>>DOB; //dd/mm/yyyy
			file>>Driver_Charges_per_KM;
			file>>status;
			age=(2023-(atoi((DOB.substr(6,10)).c_str())));
			
			if(age>58)
			{
				status=0;
			}
			ofstream f;
			f.open("Updated.txt",ios::out |ios::app);
		    f<<Driver_Id<<" "<<Driver_Name<<" "<<Driver_license_No<<" "<<DOB<<" "<<Driver_Charges_per_KM<<" "<<status<<" "<<endl;
            f.close();
			count++;


		}
		file.close();
		cout<<"Drivers retirement checked and updated."

		/*Deleting the Drivermaster.txt file and renaming the 
		updated driver details Updated.txt file to Drivermater.txt*/

		if (remove("Drivermaster.txt") != 0)
        {
            cout << "File does not remove" << endl;
        }
		else
		{
			cout<<"file removed";
		}
        if (rename("Updated.txt", "Drivermaster.txt") != 0)
        {
            cout << "File does not rename" << endl;
        }
        else
        {
            cout << "Updated sucessfully" << endl;
        }
		
			
	}
	
};
/*Truck Master Class for Addition and Activation
Owner:Shweta S.Kumar
Creation:12/12/2022
Modification Date:13/01/2023
Group:LMCPPSQ01*/

#include <iostream>
#include <fstream>

using namespace std;
//Main class of Truck Master
class Truck_Master
{
private:
//Declaring the Private Data Members
            string Truck_Number;
            string Truck_Type;
            int Truck_capacity;
            string TruckPermit;
            int Truck_Charges_Per_KM;
            string Truck_Status;
            int area;
            bool Activation = 1;
public:
            Truck_Master()
            {
                //Default Constructor
            }
            Truck_Master(string Truck_Number, string Truck_Type, int Truck_capacity, string TruckPermit, int Truck_Charges_Per_KM, string Truck_Status, int area,bool Activation)
            {
                //Assigning Values using Parameterized Constructor
                        this->Truck_Number = Truck_Number;
                        this->Truck_Type = Truck_Type;
                        this->Truck_capacity = Truck_capacity;
                        this->TruckPermit = TruckPermit;
                        this->Truck_Charges_Per_KM = Truck_Charges_Per_KM;
                        this->Truck_Status = Truck_Status;
                        this->area = area;
            }

            void setTruck_Number(string Truck_Number)
            {
                this->Truck_Number = Truck_Number;//Set function to set the TruckNumber
            }

            void setTruck_Type(string Truck_Type)
            {
                this->Truck_Type = Truck_Type;//Set function to set the type of Truck
            }
            void setTruck_capacity(int Truck_capacity)
            {
                this->Truck_capacity = Truck_capacity;//Set function is to set the capacity of the truck
            }
            void setTruckPermit(string TruckPermit)
            {
                this->TruckPermit = TruckPermit;//set function to set the TruckPermit
            }
            void setTruck_Changes_Per_KM(int Truck_Charges_Per_KM)
            {
                this->Truck_Charges_Per_KM = Truck_Charges_Per_KM;//To set the truck charges per KM
            }
            void setTruck_Status(string Truck_Status)
            {
                this->Truck_Status = Truck_Status;//To set the status of the truck
            }
            void setArea(int area)
            {
                this->area = area;//To set the area of the truck
            }
            string getTruck_Number()
            {
                return Truck_Number;//Get function to return the TruckNumber
            }
            string getTruck_Type()
            {
                return Truck_Type;//Get function to return the Truck Type
            }
            int getTruck_capacity()
            {
                return Truck_capacity;//Get function to return Capcity of the truck
            }
            string getTruck_Permit()
            {
                return TruckPermit;//Get function to return Permit of the Truck
            }
            int getTruck_Changes_Per_KM()
            {
                return Truck_Charges_Per_KM;//Get function to return the Truck Charges per KM
            }
            string getTruck_Status()
            {
                return Truck_Status;//Get function to return the Status of the Truck
            }
            int getarea()
            {
                return area;//Get function to return the Status of the Truck
            }
            bool getactivation()
            {
            return Activation;//Get function to return Truck Activation
            }
             void setActivation(bool Activation)
            {
            this->Activation = Activation;//Set function to set the Activation
            }
    
            void Addition();
            void read();
            int countfile();
   
    };

            void Truck_Master::Addition()
            {
            /*Addition function is used to add the details of the Truck and 
            those details of the Truck are written to the Text File */
            cout<<"Enter Truck Number"<<endl;
            cin>>Truck_Number;
    
            
            cout<<"Enter Truck_Type"<<endl;
            cin>>Truck_Type;
    
    
            cout<<"Enter Truck_capacity"<<endl;
            cin>>Truck_capacity;
     
            cout<<"Enter TruckPermit"<<endl;
            cin>>TruckPermit;
    
    
            cout<<"Enter Truck_charges_per_km"<<endl;
            cin>>Truck_Charges_Per_KM;
     

            cin.ignore();
            cout<<"Enter Truck_Status"<<endl;
            getline(cin,Truck_Status);
    
            cout<<"Enter the area"<<endl;
            cin>>area;
   
            ofstream os;//Creating an object of filestream
            os.open("Truckmaster.txt",ios::out|ios::app);//Opening the file to write the Data
	//Entering the Details of the truck to the file
             if(os.is_open())
            {
            os<<Truck_Number<<" ";
            os<<Truck_Type<<" ";
            os<<Truck_capacity<<" ";
            os<<TruckPermit<<" ";
            os<<Truck_Charges_Per_KM<<" ";
            os<<Truck_Status<<" ";
            os<<area<<" ";
            os<<Activation<<endl;
            os.close();
            }
        
            }
        
        int Truck_Master::countfile()
        {
        /*countfile function will count the number of lines in the text file 
        and will return the value of the linecount*/
        ifstream file2;
        int count = 0;int linecount = 0;
        string line;
        file2.open("Truckmaster.txt",ios::in);
       //While loop is to check and incremment the linecount
        while(file2.peek()!=EOF)
        {
        getline(file2, line);
        linecount++;
        }
        //cout<<"Number of lines"<<linecount;
            file2.close();
            return linecount;
        }
        void Truck_Master::read()
        {
             /*Read Function is used to read the content of the file*/           
        ifstream file2;
        int count = 0;int linecount = 0;
        string line;
        file2.open("Truckmaster.txt",ios::in);//opening the file to read the data
       
    
       
        while(1)
        {
        /*Checking whether the count of the line is equal to my count while reading if the line count is equal to the count then it will exit*/
            if(countfile()==count)
            {
                exit(0);
            }
            /*Reading the text file data and storing that data inside data member*/
            file2 >> Truck_Number;
            file2 >> Truck_Type;
            file2 >>Truck_capacity;
            file2 >>TruckPermit;
            file2>>Truck_Charges_Per_KM;
            file2 >>Truck_Status;
            file2>>area;
            file2>>Activation;
            /*Displaying the Truck Details*/
          cout<<"TruckNumber:"<<Truck_Number<<endl;
          cout<<"Truck Type:"<<Truck_Type<<endl;
          cout<<"Truck Capacity:"<<Truck_capacity<<endl;
          cout<<"TruckPermit:"<<TruckPermit<<endl;
          cout<<"Truck_changes_per_kM:"<<Truck_Charges_Per_KM<<endl;
          cout<<"Truck Status:"<<Truck_Status<<endl;
          cout<<"Area:"<<area<<endl;
          cout<<"Active/not Active:"<<Activation<<endl;
        //cout<<"End of record 1 ------------------------------"<<endl;
        count++;
        cout<<endl;
        //cout<<"count is+++++++++++++++++++++++++++++++"<<count<<endl;
        
        }
            
        
            
         file2.close();

                        
        }
            


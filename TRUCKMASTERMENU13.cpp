/*owner :Vedavikas Pothur
creation date :
modification date :
Group:LMCPPSQ01       */
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class TruckMaster /*Creating a class called truckmaster*/
{
private:

    string Truck_Number;
    string Truck_Type;
    int Truck_capacity;
    string TruckPermit;
    int Truck_Charges_Per_KM;   /*Data members of Truckmaster*/
    string Truck_Status;
    int area;
    bool Activation = 1;
public:

    void displayModification()       /*member function for displaying menu*/
    {
        string Truck_newNumber;
        string modified;
        cout << "Enter the Truck Number" << endl;
        cin >> Truck_newNumber;
        ifstream d;
        d.open("Truckmaster.txt", ios::app);
        ofstream e;
        e.open("new.txt");
        d >> Truck_Number;
        d >> Truck_Type;
        d >> Truck_capacity;
        d >> TruckPermit;
        d >> Truck_Charges_Per_KM;
        d >> Truck_Status;
        d >> area;
        d >> Activation;

        while (!d.eof()) /*for reading all lines in the file */
        {
            if (Truck_Number != Truck_newNumber)
            {
                e << Truck_Number << " ";
                e << Truck_Type << " ";
                e << Truck_capacity << " ";
                e << TruckPermit << " ";
                e << Truck_Charges_Per_KM << " ";
                e << Truck_Status << " ";
                e << area << " ";
                e << Activation << endl;

            }
            else
            {
                e << Truck_newNumber << " ";
                e << Truck_Type << " ";
                e << Truck_capacity << " ";
                cout << "You want to modify the permit of the truck(y/n)" << endl;/*modification for permit*/
                cin >> modified;
                if (modified == "y")
                {
                    cout << "Enter the modified permit" << endl;
                    cin >> TruckPermit;
                }
                e << TruckPermit << " ";
                cout << "You want to modify the charge per km (y/n)" << endl;/*modification for charges per km*/
                cin >> modified;
                if (modified == "y")
                {
                    cout << "Enter the modified charges" << endl;
                    cin >> Truck_Charges_Per_KM;
                }
                e << Truck_Charges_Per_KM << " ";
                cout << "You want to modify the status (y/n)" << endl;/*modification of status*/
                cin >> modified;
                if (modified == "y")
                {
                    cout << "Enter the modified status" << endl;
                    cin >> Truck_Status;
                }
                e << Truck_Status << " ";
                e << area << " ";
                cout << "You want Modify the Active/ Inactive Truck (y/n)" << endl;/*modification of truck Active or inactive*/
                cin >> modified;
                if (modified == "y")
                {
                    if (Activation == 1)
                    {
                        cout << "Modifying the Active Truck " << endl;
                        cout << "Enter inactive value (0)" << endl;
                        cin >> Activation;

                    }
                    else if (Activation == 0) {
                        cout << "Modify the In Active truck " << endl;
                        cout << "Enter Activation value (1)" << endl;
                        cin >> Activation;

                    }
                }
                e << Activation << endl;

            }
            d >> Truck_Number;
            d >> Truck_Type;
            d >> Truck_capacity;
            d >> TruckPermit;
            d >> Truck_Charges_Per_KM;
            d >> Truck_Status;
            d >> area;
            d >> Activation;

        }
        e.close();
        d.close();

        if (remove("Truckmaster.txt") != 0)
        {
            cout << "File does not remove" << endl;
        }
        if (rename("new.txt", "Truckmaster.txt") != 0)/*renaming the file */
        {
            cout << "File does not rename" << endl;
        }
        else
        {
            cout << "Updated sucessfully" << endl;
        }
    }
};
int main()
{
    TruckMaster tm;/*Truckmaster object*/
    while (true)
    {
        int choice;
        cout << "Truck_Booking Details" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Cancellation " << endl;
        cout << "3. Modification " << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your Choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
           //tm.Addition();
            break;
        }
        case 2:
        {
            //displayDeletion();
            break;
        }
        case 3:
        {
            tm.displayModification();/*calling the display modification function*/
            break;
        }
        case 4:
        {
            cout << "Exit is Successfully" << endl;
            //exit(1);
            break;
        }

        default:
            cout << "Invalid Choice" << endl;
            break;

        }
    }
}

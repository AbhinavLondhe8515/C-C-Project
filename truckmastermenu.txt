#include <iostream>
#include <fstream>
using namespace std;

class Truck_Mastermenu
{
private:
	string Truck_Number;
	string Truck_Type;
	int Truck_capacity;
	string TruckPermit;
	string Truck_Changes_Per_KM;
	int Truck_Status;
	int area;
public:
	Truck_Mastermenu()
	{

	}
	Truck_Mastermenu(string Truck_Number, string Truck_Type, int Truck_capacity, string TruckPermit, string Truck_Changes_Per_KM, int Truck_Status, int area)
	{
		this->Truck_Number = Truck_Number;
		this->Truck_Type = Truck_Type;
		this->Truck_capacity = Truck_capacity;
		this->TruckPermit = TruckPermit;
		this->Truck_Changes_Per_KM = Truck_Changes_Per_KM;
		this->Truck_Status = Truck_Status;
		this->area = area;
	}

	void setTruck_Number(string Truck_Number)
	{
		this->Truck_Number = Truck_Number;
	}

	void setTruck_Type(string Truck_Type)
	{
		this->Truck_Type = Truck_Type;
	}
	void setTruck_capacity(int Truck_capacity)
	{
		this->Truck_capacity = Truck_capacity;
	}
	void setTruckPermit(string TruckPermit)
	{
		this->TruckPermit = TruckPermit;
	}
	void setTruck_Changes_Per_KM(string Truck_Changes_Per_KM)
	{
		this->Truck_Changes_Per_KM = Truck_Changes_Per_KM;
	}
	void setTruck_Status(int Truck_Status)
	{
		this->Truck_Status = Truck_Status;
	}
	void setArea(int area)
	{
		this->area = area;
	}
	string getTruck_Number()
	{
		return Truck_Number;
	}
	string getTruck_Type()
	{
		return Truck_Type;
	}
	int getTruck_capacity()
	{
		return Truck_capacity;
	}
	string getTruck_Permit()
	{
		return TruckPermit;
	}
	string getTruck_Changes_Per_KM()
	{
		return Truck_Changes_Per_KM;
	}
	int getTruck_Status()
	{
		return Truck_Status;
	}
	int getarea()
	{
		return area;
	}
	void menu()
	{
		ofstream os;
		os.open("Truckmastermenu.txt");
		os << this->getTruck_Number() << " " << this->getTruck_Type() << " " << Truck_capacity << " " << TruckPermit << " " << Truck_Changes_Per_KM << " " << Truck_Status << " " << area << endl;
		os.close();

	}
	void modification() {


	}
};

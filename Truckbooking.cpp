#include <iostream>

#include<string>

using namespace std;

 

class Truck_booking

{

public:

            string Tran_ID;

            string Type_of_Truck;

            string Booking_date;

            string Load_pic_date;

            int Capacity;

            float Distance;

            float Total_cost;

            float Miscellaneous_Cost;

            string Status;//(in km)

            string Truck_Number;

            string Driver_Id;

            int area;//area(of product in square meter)

            int Qty_product;

public:

            Truck_booking()

            {

 

            }

            Truck_booking(string Tran_ID,string Type_of_Truck,string Booking_date,string Load_pic_date,int Capacity,float Distance,float Total_cost,float Miscellaneous_Cost,string Status,string Truck_Number,string Driver_Id,int area,int Qty_product)

            {

                        this->Tran_ID=Tran_ID;

                        this->Type_of_Truck=Type_of_Truck;

                        this->Booking_date=Booking_date;

                        this->Load_pic_date=Load_pic_date;

                        this->Capacity=Capacity;

                        this->Distance=Distance;

                        this->Total_cost=Total_cost;

                        this->Miscellaneous_Cost=Miscellaneous_Cost;

                        this->Status=Status;

                        this->Truck_Number=Truck_Number;

                        this->Driver_Id=Driver_Id;

                        this->area=area;

                        this->Qty_product=Qty_product;

            }

 

            void setTran_ID(string Tran_ID)

            {

                        this->Tran_ID=Tran_ID;

            }

            void setType_of_Truck(string Type_of_Truck)

            {

                        this->Type_of_Truck=Type_of_Truck;

            }

            void setBooking_date(string Booking_date)

            {

                        this->Booking_date=Booking_date;

            }

            void setLoad_pic_date(string Load_pic_date)

            {

                        this->Load_pic_date=Load_pic_date;

            }

            void setCapacity(int Capacity)

            {

                        this->Capacity=Capacity;

            }

            void setDistance(float Distance)

            {

                        this->Distance=Distance;

            }

            void setTotal_cost(float Total_cost)

            {

                        this->Total_cost=Total_cost;

            }

            void setMiscellaneous_Cost(float Miscellaneous_Cost)

            {

                        this->Miscellaneous_Cost=Miscellaneous_Cost;

            }

            void setStatus(string Status)

            {

                        this->Status=Status;

            }

            void setTruck_Number(string Truck_Number)

            {

                        this->Truck_Number=Truck_Number;

            }

            void setDriver_Id(string Driver_Id)

            {

                        this->Driver_Id=Driver_Id;

            }

            void setarea(int area)

            {

                        this->area=area;

            }

            void Qty_product(int Qty_product)

            {

                        this->Qty_product=Qty_product;

            }

                string getTran_ID()

                        {

                                    return Tran_ID;

                        }

                string getType_of_Truck()

                        {

                                    return Type_of_Truck;

                        }

                string getBooking_date()

                        {

                                    return Booking_date;

                        }

                        string getLoad_pic_date()

                        {

                                    return Load_pic_date;

                        }

                        int getCapacity()

                        {

                                    return Capacity;

                        }

                        float getDistance()

                        {

                                    return Distance;

                        }

                        float getTotal_cost()

                        {

                                    return Total_cost;

                        }

                        float getMiscellaneous_Cost()

                        {

                                    return Miscellaneous_Cost;

                        }

                        string getStatus()

                        {

                                    return Status;

                        }

                        string getTruck_Number()

                        {

                                    return Truck_Number;

                        }

                        string getDriver_Id()

                        {

                                    return Driver_Id;

                        }

                        int setarea()

                        {

                                    return area;

                        }

                        int Qty_product()

                        {

                        return Qty_product;

                        }

 

};

int main()

{

            string Tran_ID;

                        string Type_of_Truck;

                        string Booking_date;

                        string Load_pic_date;

                        int Capacity;

                        float Distance;

                        float Total_cost;

                        float Miscellaneous_Cost;

                        string Status;//(in km)

                        string Truck_Number;

                        string Driver_Id;

                        int area;//area(of product in square meter)

                        int Qty_product;

}

#include <iostream>
#include "Drivermaster_class.cpp"
#include<string>
using namespace std;


int main()
{
  int n;
  string Driver_Id;
  string Driver_Name;
  string Driver_license_No;
  string DOB;
  int Driver_Charges_per_KM;
  int status;
  
  /*creating the object of Driver_Master class*/
  Driver_Master dd(Driver_Id,Driver_Name, Driver_license_No, DOB, Driver_Charges_per_KM,status);

  dd.addition(); /*Calling addition function*/
  //dd.retirement(); /*retirement function called on 15th of every month.*/
  return 0;
}
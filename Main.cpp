#include <iostream>
#include "TRuck_Master.cpp"
using namespace std;


int main()
{
   
    int n;

    cout<<"Enter the number of truck"<<endl;
    cin>>n;
    
        
    for(int i = 0;i<n;i++)
    {
        Truck_Master *td = new Truck_Master();
       // td.putdata();
        td->Addition();
        //td->read();
       
    }
        Truck_Master tm;
        tm.read();
        
            return 0;
}

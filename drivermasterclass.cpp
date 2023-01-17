#include<iostream>

#include<string>

using namespace std;

class Driver

{

private:

	string drivername;

	string driverid;

	string driverlincenseno;

	int drivercharges;

	int status;

public:

	void setdrivername(string name)

	{

		drivername = name;

	}

	void setdriverid(string id)

	{

		driverid = id;

	}

	void setdriverlince(string lno)

	{

		driverlincenseno = lno;

	}

	void setdrivercharges(int charge)

	{

		drivercharges = charge;

	}

	void setstatus(int sts)

	{

		status = sts;

	}



	string getdrivername()

	{

		return drivername;

	}

	string getdriverid()

	{

		return driverid;

	}

	string getdriverlince()

	{

		return driverlincenseno;

	}

	int getdrivercharges()

	{

		return drivercharges;

	}

	int getstatus()

	{

		return status;

	}

};
#include <iostream>
#include <string>
#include <algorithm>
#include "../include/callCentre.h"
#include "../include/dispatchCall.h"
using namespace std;
int main()
{
	Employees ABCcompany;
	int call;
	while(true)
	{
		cout<<"Do you wish to make a call? If yes, press 1 else press 0"<<endl;
	cin>>call;
	if(call==1)
	{
		
		dispatchCall(ABCcompany);
	}
	else
	{
		exit(1);
	}		
	}
	
	// dispatchCall(call, ABCcompany);
}
#ifndef CALL_CENTRE
#define CALL_CENTRE
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Employees
{
    private:
       int respondents;
       int manager;
       int director;
       vector<bool> respondentAllocation;
       vector<bool> managerAllocation;
       vector<bool> directorAllocation;
    public:
       Employees();
       vector<bool> getrespondentAllocation();
       vector<bool> getmanagerAllocation();
       vector<bool> getdirectorAllocation();
       void setRespondentUnavailable(int rpos);
       void setManagerUnavailable(int mpos);
       void setDirectorUnavailable(int dpos);
       void getRespondents();
    //    void dispatchCall(bool incomingCall);      
};
#endif
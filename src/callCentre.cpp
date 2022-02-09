#include "../include/callCentre.h"

Employees::Employees()
{
    respondents=4;
    manager=10;
    director=5;
    respondentAllocation=vector<bool>(5,true);
    managerAllocation=vector<bool>(11,true);
    directorAllocation=vector<bool>(6,true);
}

vector<bool> Employees::getrespondentAllocation()
{
    return respondentAllocation;
}
 
vector<bool> Employees::getmanagerAllocation()
{
    return managerAllocation;
} 

vector<bool> Employees::getdirectorAllocation()
{
    return directorAllocation;
}

void Employees::setRespondentUnavailable(int rpos)
{
    respondentAllocation[rpos]=false;
    // respondentAllocation=respondentAllocation;
}

void Employees::setManagerUnavailable(int mpos)
{
    managerAllocation[mpos]=false;
}

void Employees::setDirectorUnavailable(int dpos)
{
    directorAllocation[dpos]=false;
}

void Employees::getRespondents()
{
    for(int i=0;i<respondentAllocation.size();i++)
    {
        cout<<respondentAllocation[i]<<endl;
    }
}